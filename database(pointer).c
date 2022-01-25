#include<stdio.h>
#define max 10
struct Component
{
	int sr_no;
	char name[20];
	char symbol;
	int value;
	float cost;
};
void create(struct Component *arr,int n);
void display(struct Component *arr,int n);
void modify(struct Component *arr,int n);
void append(struct Component *arr,int n);
void search(struct Component *arr,int n);
void sort(struct Component *arr,int n);
void main()
{
	struct Component arr[max];
	int ch,n;
	printf("\nEnter for database\n1 for creating\n2 for displaying\n3 for Modifying\n4 for appending\n5 for searching\n6 for sorting\n7 for stopping");
	scanf("%d",&ch);
	do
	{
		switch(ch)
		{
			case 1:printf("\nEnter the no of components :");
				scanf("%d",&n);
				create(arr,n);
				break;
			case 2:display(arr,n);
				break;
			case 3:modify(arr,n);
				break;
			case 4:append(arr,n);
				n=n+1;
				break;
			case 5:search(arr,n);
				break;
			case 6:sort(arr,n);
				printf("\nSorted successfully : ");
				break;
			default:printf("\ninvalid input : ");
		}
		printf("\nEnter for database \n1Create\n2Display\n3Modify\n4Append\n5Search\n6Sort\n7Exit");
		scanf("%d",&ch);
	}while(ch != 7);
}
void create(struct Component *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter sr.no :");
		scanf("%d",&(arr+i)->sr_no);
		printf("Enter name : ");
		scanf("%s",&(arr+i)->name);
		printf("Enter symbol : ");
		scanf("%s",&(arr+i)->symbol);
		printf("Enter value : ");
		scanf("%d",&(arr+i)->value);
		printf("Enter cost : ");
		scanf("%f",&(arr+i)->cost);
	}
	printf("Creation Completed.");
}
void display(struct Component *arr,int n)
{
	int i;
	printf("\nsr_no\tname\t\tsymbol\t\tvalue\t\tcost");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%s\t%d\t %f",(arr+i)->sr_no,&(arr+i)->name,&(arr+i)->symbol,(arr+i)->value,(arr+i)->cost);
	}
}
void modify(struct Component *arr,int n)
{
	int sr,i;
	printf("\nEnter the sr_no of the component to be modified : ");
	scanf("%d",&sr);
	for(i=0;i<n;i++)
	{
		if((arr+i)->sr_no == sr)
		{
			break;
		}
	}
	printf("\nEnter the modified values of that component : ");
	printf("\nEnter name : ");
	scanf("%s",&(arr+i)->name);
	printf("\nEnter symbol : ");
	scanf("%s",&(arr+i)->symbol);
	printf("\nEnter value : ");
	scanf("%d",&(arr+i)->value);
	printf("\nEnter cost : ");
	scanf("%f",&(arr+i)->cost);
}
void append(struct Component *arr,int n)
{
	printf("\nEnter the information of the component to be added : ");
	printf("\nEnter sr.no :");
	scanf("%d",&(arr+n)->sr_no);
	printf("\nEnter name : ");
	scanf("%s",&(arr+n)->name);
	printf("\nEnter symbol : ");
	scanf("%s",&(arr+n)->symbol);
	printf("\nEnter value : ");
	scanf("%d",&(arr+n)->value);
	printf("\nEnter cost : ");
	scanf("%f",&(arr+n)->cost);
}
void search(struct Component *arr,int n)
{
	int i,flag=0;
	char s;
	printf("\nEnter the symbol of the component to be searched : ");
	scanf("%s",&s);
	for(i=0;i<n;i++)
	{
		if((arr+i)->symbol == s)
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nComponent Found : at index %d",i);
	}
	else
	{
		printf("\nComponent Not Found :");
	}
}
void sort(struct Component *arr,int n)
{
	int f,i,j;
	struct Component temp;
	printf("\nEnter 1 for ascending sort of cost and 2 for decending sort of cost: ");
	scanf("%d",&f);
	if(f == 1)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr+i)->cost > (arr+j)->cost)
				{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				}
			}
		}
	}
	if(f == 2)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr+i)->cost < (arr+j)->cost)
				{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				}
			}
		}
	}
}

