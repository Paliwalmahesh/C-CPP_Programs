#include<stdio.h>
#include<string.h>
struct car
{
	char name[100];
	char city;
	int number;
	float cost;
};
int n=0;
void getdata(struct car *sptr,int n)
{
int i;
	for(i=0;i<n;i++)
	{
	
	printf("element %d:\n",i+1);
	printf("Enter name :");
	scanf("%s",&sptr->name);
	printf("Enter city :");
	scanf("%s",&sptr->city);
	printf("Enter number :");
	scanf("%d",&sptr->number);
	printf("Enter cost:");
	scanf("%f",&sptr->cost);
	sptr++;}
   
}
void display(struct car *sptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("name is :");
	printf("%s\t",sptr->name);
	printf("city is :");
	printf("%c\t",sptr->city);
	printf("number is :");
	printf("%d\t",sptr->number);
	printf("cost of element is :");
	printf("%f\n",sptr->cost);
	sptr++;
   }
}
void sort(struct car s[] ,int n)
{
	int i,j;
	struct car temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			if(s[i].number>s[j].number)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}

		}
	}
}
void main(){

struct car s[100];
struct car *ptr;
ptr=s;
int b;

while(b!=4){
printf("\n1.Enter car \n2.Display car \n3.Sort car according to num\n");
printf("enter choice");
scanf("%d",&b);


switch(b)
{
		case 1:
			printf("Enter number of cars");
			scanf("%d",&n);
			getdata(ptr,n);
			break;
		case 2:
			display(ptr,n);
			break;
			
		case 3:
			
			sort(s,n);
		  break;	
			}
			
}

}
