#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,arr[100],i,j,large;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
large=i;
for(j=i+1;j<n;j++)
{
if(arr[large]<arr[j])
{large=j;}

int temp=arr[large];
arr[large]=arr[i];
arr[i]=temp;

}
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
getch();
}