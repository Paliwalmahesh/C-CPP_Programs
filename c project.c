#include<stdio.h>
#include<string.h>
int m=1;
	struct passanger
{
	char name[100];
	char gender[50];
	int age;
	int Mnum;
	
};
struct travel
{
	int id;
	char Busname[100];
	char bcity[25];
	char dcity[25];
	int seatno;
	float cost;
	struct passanger p;

};
struct passanger getdatap()
{
    struct passanger p1;
	printf("enter name of passanger :");
	scanf("%s",&p1.name);
	printf("enter gender:");
	scanf("%s",&p1.gender);
	printf("enter age:");
	scanf("%d",&p1.age);
	printf("enter mobile number:");
	scanf("%d",&p1.Mnum);
	return p1;
}
void displayp(struct passanger p1)
{   
	printf("name : %s\t\t",p1.name);
	printf("gender :%s\t\n",p1.gender);
	printf("age :%d\t\t",p1.age);
	printf("contact number :%d\n",p1.Mnum);
}

struct travel getdata()
{   
    struct travel e1;
    e1.id=m;
	printf("enter busname :");
	scanf("%s",&e1.Busname);
	printf("enter boarding city :");
	scanf("%s",&e1.bcity);
    printf("enter destination city :");
	scanf("%s",&e1.dcity);
	printf("enter seatnumber :");
	scanf("%d",&e1.seatno);
	printf("enter cost:");
	scanf("%f",&e1.cost);
	e1.p = getdatap();
	m++;
	return e1;
}
void search(struct travel e[ ],int n)
{
  int r=2,i;
  char se[100];
  printf("search travel by travelsname ");
  scanf("%s",&se);
  for(i=0;i<n;i++){
  	 r=strcmp(se,e[i].Busname);
  	if (r==0){
  		printf("travels found!!!!!!!\n ticket id : %d \n",e[i].id);
  		     }
  	else if(i==n-1)
  	    printf("element  not found \n");
  	    
  	
  		}  

}

void display(struct travel e1)
{ 	printf("-------------------ticket invoice---------------------\n");

    printf("------------------------------------------------------\n");
	printf("ticket id:%d\t\t",e1.id);
	printf("busname:");
	printf("%s\n",e1.Busname);
	printf("route of travelling:%s to %s\t",e1.bcity,e1.dcity);
	printf("seatnumber :");
	printf("%d\n",e1.seatno);
	printf("cost:");
	printf("%f\n",e1.cost);
	printf("----------------passanger information------------------\n");
	displayp(e1.p);
	printf("--------------------Happy journey----------------------\n\n\n");
}
void main()
{
int n,i,a=0;
printf("enter number of registration\n");
scanf("%d",&n);
struct travel T[50];
for(i=0;i<n;i++){
T[i]=getdata();}
for(i=0;i<n;i++){
display(T[i]);}
search(T,n);
}





