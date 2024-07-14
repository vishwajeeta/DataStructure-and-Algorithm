#include<stdio.h>
#include<conio.h>
void main(){
int n,arr[30],i,k,pos;
clrscr();
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the search element:");
scanf("%d",&k);
pos=linsearch(n,arr,k);
if(pos==-1)
printf("Element not found");
else
printf("Element found at postion %d",pos);
getch();
}
int linsearch(int n,int arr[30],int k)
{
if(n<=0)
return -1;
if(arr[n-1]==k)
return n;
else
return linsearch(n-1,arr,k);
}