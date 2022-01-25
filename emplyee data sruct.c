#include <stdio.h>

 
struct employee{
    char name[30];
    int age;
    float salary;
    int mobilenum;
    
    
};
struct employee getdeta();
void display( struct employee);
//struct employee e[5];


struct employee getdeta(){
	struct employee emp;
    printf("Enter details :\n");
    printf("Name of emplyee :");          
	scanf("%s",&emp.name);
    printf("age of employee :");           
	 scanf("%d",&emp.age);
    printf("Salary :");       
	 scanf("%f",&emp.salary);
	printf("mobile num of employee :");           
	 scanf("%d",&emp.mobilenum);
	 return emp; }
     
void display( struct employee emp){

    printf("\tEntered detail is:");
    printf("\tName: %s",emp.name);
    printf("\tage: %d",emp.age);
    printf("\tSalary: %f",emp.salary);
	printf("\tmobilenum: %d",emp.mobilenum);}
	
void main() 
{
	int i;
	struct employee e[5];
	
	for (i = 0; i < 5; i++){
	
	     printf("employee %d\n",i+1);
	     e[i]= getdeta();
		 }
    for (i = 0; i < 5; i++){
	
         printf("employee %d\n",i+1);
	     display(e[i]);}
}
