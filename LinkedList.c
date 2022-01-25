#include<stdio.h>
#include<stdlib.h>

void create();
void display(); 
void delete_begin();
void delete_end();
struct node
{
int info;
struct node *next;
};
struct node *head=NULL;
int main() 
{
	printf(" Shreyas Mandlik\n");
	printf(" Roll NO:22433\n");
int choice;
while(1){

printf("\n 1.Create \n");
printf(" 2.Display \n");
printf(" 3.Delete from beginning \n");
printf(" 4.Delete from the end \n");
printf(" 5.Exit \n");
printf("Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
delete_begin();
break;
case 4:
delete_end();
break;
case 5:
exit(0);
break;
default:
printf("\n Wrong Choice:\n");
break;
}
}
return 0;
}
void create()
{
	struct node *temp,*ptr;
		temp=(struct node *)malloc(sizeof(struct node));
		if(temp==NULL)
		{
		printf("\nOut of Memory Space:\n");
		exit(0);
		}
		printf("\nEnter the data value for the node:\t");
		scanf("%d",&temp->info);
		temp->next=NULL;
		if(head==NULL)
		{
		head=temp;
		}
		else
		{
		ptr=head;
		while(ptr->next!=NULL)
		{
		ptr=ptr->next;
		}
		ptr->next=temp;
		}
}
void display()
{
		struct node *ptr;
		if(head==NULL)
		{
			printf("\nList is empty:\n");
			return;
		}
		else
		{
				ptr=head;
				printf("\nThe List elements are:\n");
				while(ptr!=NULL)
				{
					printf("%d\t",ptr->info );
					ptr=ptr->next ;
				}
		}
}

void delete_begin()
{
struct node *ptr;
if(ptr==NULL)
{
printf("\nList is Empty:\n");
return;
}
else
{
ptr=head;
head=head->next ;
printf("\nThe deleted element is :%d\t",ptr->info);
free(ptr);
}
}
void delete_end()
{
struct node *temp,*ptr;
if(head==NULL)
{
printf("\nList is Empty:");
exit(0);
}
else if(head->next ==NULL)
{
ptr=head;
head=NULL;
printf("\nThe deleted element is:%d\t",ptr->info);
free(ptr);
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
printf("\nThe deleted element is:%d\t",ptr->info);
free(ptr);
}
}

