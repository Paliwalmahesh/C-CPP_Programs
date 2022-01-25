#include<stdio.h>
#include<stdlib.h>

struct Donors
{
	int sr_no;
	char name[20];
	int id;
	int age;
};
void create(struct Donors *arr,int n);
void display(struct Donors *arr,int n);
void search(struct Donors *arr,int n);

void main()
{
	struct Donors *arr;
	int ch,n;
	arr=(struct Donors *)malloc(n*sizeof(struct Donors *));
	printf("\nEnter for database\n1 for creating\n2 for displaying\n3 for searching\n4 for stopping\n");
	scanf("%d",&ch);
	do
	{
		switch(ch)
		{
			case 1:printf("\nEnter the no of Donors :");
				scanf("%d",&n);
				create(arr,n);
				break;
			case 2:display(arr,n);
				break;
			case 3:search(arr,n);
				break;
		
				break;
			default:printf("\ninvalid input : ");
		}
		printf("\nEnter for database \n1 for creating\n2 for displaying\n3 for searching\n4 for stopping\n");
		scanf("%d",&ch);
	}while(ch != 4);
}
void create(struct Donors *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter sr.no :");
		scanf("%d",&(arr+i)->sr_no);
		printf("Enter name : ");
		scanf("%s",&(arr+i)->name);
		printf("Enter id : ");
		scanf("%d",&(arr+i)->id);
		printf("Enter Age : ");
		scanf("%d",&(arr+i)->age);
	}
}
void display(struct Donors *arr,int n)
{
	int i;
	printf("\nSr_no\tname\t\tId\tAge");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t\t%d\t%d",(arr+i)->sr_no,(arr+i)->name,(arr+i)->id,(arr+i)->age);
	}
}


void search(struct Donors *arr,int n)
{
	int i,flag=0;
	int id;
	printf("\nEnter the ID of donor  to be searched : ");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if((arr+i)->id == id)
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nDonor Found : at index %d",i);
	}
	else
	{
		printf("\nDonor Not Found :");
	}
}

			
