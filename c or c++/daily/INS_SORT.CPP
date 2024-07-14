#include<stdio.h>
#include<conio.h>
void array(int arr[10],int n);
void insertion(int arr[10],int n);
void main()
{
int arr[100],i,n;
clrscr();
printf("\n\n\n\n\nEnter the no of arrays:");
scanf("%d",&n);
printf("Enter %d Elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
insertion(arr,n);
array(arr,n);
getch();
}



//////////////////////////////////////////////////////////////////
void insertion(int arr[],int n)
{
int i,j,key;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]<key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}

////////////////////////////////////////////////////////////////////
void array(int arr[10],int n)
{
for(int i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
}