#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,arr[100];
clrscr();
printf("Enter the no of arrays:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
arr[i]=i+1;
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
getch();
}