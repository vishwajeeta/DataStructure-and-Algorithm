#include<stdio.h>
#include<conio.h>
void selection(int arr[100],int n);
void swap(int *xp,int *yp);
void array(int arr[100],int n);
void main()
{
int n,arr[100],i;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
selection(arr,n);
array(arr,n);
getch();
}


void selection(int arr[],int n)
{
int i,j,large;
for(i=0;i<n-1;i++)
{
large=i;
for(j=i+1;i<n;j++)
{
if(arr[large]<arr[j])
large=j;
}
swap(&arr[large],&arr[i]);
}
}



void swap(int *xp,int *yp)
{
int temp=*xp;
*xp=*yp;
*yp=temp;
}

void array(int arr[100],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}