#include<stdio.h>
#include<conio.h>
void main()
{
int temp,i,arr[100],d,n,c;
clrscr();
printf("No of elements to Enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(c=0;c<n;c++)
{
for(d=0;d<n-c-1;d++)
{
if(arr[d]>arr[d+1])
{
temp=arr[d];
arr[d]=arr[d+1];
arr[d+1]=temp;
}
}
}
printf("bubble_sorted:");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
getch();
}