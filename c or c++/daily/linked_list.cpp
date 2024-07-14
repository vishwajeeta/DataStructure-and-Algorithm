#include<stdio.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;
int main()
{
	int choice;
	do{
	
	printf("1.create\n2.display\n4.exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("creation:-\n");
				break;
		case 2:printf("display:-\n");
				break;
		default:printf("invallid option selected\n");
	}
}while(choice!=4);
}
int create()
{
	int temp;
	temp=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		print("%d",start)
	}
}
