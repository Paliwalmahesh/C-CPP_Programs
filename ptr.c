#include<stdio.h>
struct student
{
	char name[100];
	int age ;
	int salary;
	int MN;
};
void getdata(struct student *sptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("Enter name :");
	scanf("%s",&sptr->name);
	printf("Enter age :");
	scanf("%d",&sptr->age);
	printf("Enter salary :");
	scanf("%d",&sptr->salary);
	printf("Enter mobile number :");
	scanf("%d",&sptr->MN);
	sptr++;
   }
}
void display(struct student *sptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("name is :");
	printf("%s\n",sptr->name);
	printf("age is :");
	printf("%d\n",sptr->age);
	printf("salary is :");
	printf("%d\n",sptr->salary);
	printf("mobile number is :");
	printf("%d",sptr->MN);
	sptr++;
   }
}
void main()
{
struct student s[5];
struct student *ptr;
int n=0;
ptr=s;


getdata(ptr,5);
display(ptr,5);	
}
