#include <stdio.h>
#include <string.h>
 
struct employee{
    char    name[30];
    int     age;
    float   salary;
    int mobilenum;
    
    
};
struct employee getdeta();
void display( struct employee);


struct employee getdeta(){
	struct employee emp;
    printf("Enter details :\n");
    printf("Name of emplyee ?:");          
	gets(emp.name);
    printf("age of employee ?:");           
	 scanf("%d",&emp.age);
    printf("Salary ?:");       
	 scanf("%f",&emp.salary);
	printf("mobile num of employee ?:");           
	 scanf("%d",&emp.mobilenum);
	 return emp; }
     
void display( struct employee emp){

    printf("\nEntered detail is:");
    printf("Name: %s",emp.name);
    printf("\nage: %d",emp.age);
    printf("\nSalary: %f",emp.salary);
	printf("\nmobilenum: %d",emp.mobilenum);}
 
int main()
{

    struct employee emp1;
    emp1 = getdeta();
    display(emp1);
     
 
    return 0;
}
