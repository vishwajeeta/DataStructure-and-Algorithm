#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,key,arr[100];
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter search number:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==arr[i])
{
printf("%d found at %d",key,i+1);
break;
}
}
if(key!=arr[i])
printf("no data found");
getch();
}