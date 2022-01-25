#include<stdio.h>
#include<string.h>
struct Elements
{
	char name[100];
	char sym;
	int value;
	float cost;
};
int i;
struct Elements getdata()
{
    struct Elements e1;
	printf("Element %d:\n",i+1);
	printf("enter name :");
	scanf("%s",&e1.name);
	printf("enter symbol :");
	scanf("%s",&e1.sym);
	printf("enter value :");
	scanf("%d",&e1.value);
	printf("enter cost:");
	scanf("%f",&e1.cost);
	return e1;
}
void display(struct Elements e1)
{
	printf("name is :");
	printf("%s\t",e1.name);
	printf("symbol is :");
	printf("%c\t",e1.sym);
	printf("value is :");
	printf("%d\t",e1.value);
	printf("cost of element is :");
	printf("%f\n",e1.cost);
}
void search(struct Elements e[ ],int n)
{
  int r=2,i;
  char se[100];
  printf("search element by name ");
  scanf("%s",&se);
  for(i=0;i<n;i++){
  	 r=strcmp(se,e[i].name);
  	if (r==0){
  		printf("element found at %d location\n",i+1);
  		break;}
  	else if(i==n-1)
  	    printf("element  not found \n");
  	    
  	
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

void main()
{
int n,a=0;
printf("enter number of elements\n");
scanf("%d",&n);
struct Elements s[100];
for(i=0;i<n;i++){
			
			
s[i]=getdata();}

int b;
menu:{
printf("enter choise");
printf("\n1.display elementd\n2.seaching elements\n3.sorting elements\n4.modify elementd\n5.append elements");
scanf("%d",&b);
switch(b)
{
		case 1:
			for(i=0;i<n;i++){
			display(s[i]);}
			
			break;
		case 2:
			search(s,n);
		
			break;
		case 3:
		{
			sort(s,n);

          printf("after sorting by values\n");

         	for(i=0;i<n;i++){
			display(s[i]);}
			break;}
	    case 4:{
	    	modify(s);
			printf("after modification \n");
			for(i=0;i<n;i++){
			display(s[i]);}
			

			break;
		}
	    case 5:{
	    	printf("enter number of elements want to append:");	
			scanf("%d",&a);
			for(i=n;i<n+a;i++){
			s[i]=getdata();}
		
		
			printf("%d",n);
			printf("after appending \n");
			for(i=0;i<n+a;i++){
			display(s[i]);}
			
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
