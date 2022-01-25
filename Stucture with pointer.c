#include<stdio.h>
#include<string.h>
struct Elements
{
	char name[100];
	char sym;
	int value;
	float cost;
};
void getdata(struct Elements *sptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("element %d:\n",i+1);
	printf("Enter name :");
	scanf("%s",&sptr->name);
	printf("Enter symbol :");
	scanf("%s",&sptr->sym);
	printf("Enter value :");
	scanf("%d",&sptr->value);
	printf("Enter cost:");
	scanf("%f",&sptr->cost);
	sptr++;
   }
}
void display(struct Elements *sptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("name is :");
	printf("%s\t",sptr->name);
	printf("symbol is :");
	printf("%c\t",sptr->sym);
	printf("value is :");
	printf("%d\t",sptr->value);
	printf("cost of element is :");
	printf("%f\n",sptr->cost);
	sptr++;
   }
}

void search(struct Elements *sptr,int n)
{
  int r=2,i;
  char se[100];
  printf("search element by name ");
  scanf("%s",&se);
  for(i=0;i<n;i++){
  	 r=strcmp(se,sptr->name);
  	if (r==0){
  		printf("element found at %d location\n",i+1);
  		break;}
  	else if(i==n-1)
  	    printf("element  not found \n");
  	    
  		sptr++;
  		}  

}
void sort(struct Elements s[] ,int n)
{
	int i,j;
	struct Elements temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			if(s[i].value>s[j].value)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}

		}
	}
}
void modify(struct Elements s[] ){
	int i,j;
	printf("enter element number which want to modify   :");
	scanf("%d",&i);
	printf("enter element property number which want to modify\n1.name\n2.symbol\n3.value\n4.cost\n :");
	scanf("%d",&j);
	switch(j){
		case 1:
			printf("Enter name :");
			scanf("%s",&s[i-1].name);
			break;
		case 2:
			printf("Enter symbols :");
			scanf("%s",&s[i-1].sym);
			break;
		case 3:
			printf("Enter values :");
			scanf("%d",&s[i-1].value);
			break;
	    case 4:
	    	printf("Enter cost :");
	    	scanf("%f",&s[i-1].cost);
	    	break;
		}
	
	
	
}
int append(struct Elements s[],int n,int a)
{
	int i;
	for(i=n;i<n+a;i++)
	{
		printf("Enter name :");
		scanf("%s",&s[i].name);
		
		printf("Enter symbols :");
		scanf("%s",&s[i].sym);
	
		printf("Enter values :");
		scanf("%d",&s[i].value);
		
	    printf("Enter cost :");
	    scanf("%f",&s[i].cost);

   }
}

void main()
{
int n,a;
printf("enter number of elemets\n");
scanf("%d",&n);
struct Elements s[100];
struct Elements *ptr;
ptr=s;
getdata(ptr,n);
int b;
menu:{
printf("enter choise");
printf("\n1.display elementd\n2.seaching elements\n3.sorting elements\n4.modify elementd\n5.append elements");
scanf("%d",&b);
switch(b)
{
		case 1:
			display(ptr,n);
			
			break;
		case 2:
			search(ptr,n);
		
			break;
		case 3:
		{
			sort(s,n);

          printf("after sorting by values\n");

         display(ptr,n);
			break;}
	    case 4:{
	    	modify(s);
			printf("after modification \n");
			display(ptr,n);

			break;
		}
	    case 5:{
	    	printf("enter number of elements want to append:");	
			scanf("%d",&a);
			append(s,n,a);
			printf("after appending \n");
			display(ptr,n+a);
	    	break;}
	    
		}
	}
int r;
printf("for contineu press 1");
scanf("%d",&r);
if(r==1){
	goto menu;
}
}

