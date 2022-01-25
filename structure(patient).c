#include<stdio.h>
#include<string.h>
struct patient
{
	char name[100];
	char city[100];
	int age;
	
};
int i,n=0;
struct patient getdata()
{
    struct patient e1;
	printf("patient %d:\n",i+1);
	printf("enter name :");
	scanf("%s",&e1.name);
	printf("enter city :");
	scanf("%s",&e1.city);
	printf("enter age :");
	scanf("%d",&e1.age);

	return e1;
}
void display(struct patient e1)
{
	printf("name is :");
	printf("%s\t",e1.name);
	printf("city is :");
	printf("%s\t",e1.city);
	printf("age is :");
	printf("%d\n",e1.age);
;
}
void deleteing( struct patient  s[],int n){
	
	int position ,c;
	printf("location want to delete element   ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\nDeletion not possible\n");
    else 
        for(c = position-1; c < n-1; c++){
		
        s[c] = s[c+1];}
}


void main(){

int b;
struct patient s[100];


while(b!=4){
printf("\n1.enter patient \n2.display patient \n3.delete patient\n");
printf("enter choice");
scanf("%d",&b);


switch(b)
{
		case 1:
			s[n]=getdata();
			n++;
			break;
		case 2:
			
		for(i=0;i<n;i++){
			display(s[i]);}
			break;
			
		case 3:
			for(i=0;i<n;i++){
			display(s[i]);}
			deleteing(s,n);
		  break;	
			}
			
}
}
