#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[10];
	int roll_no;
	int mobno;
	int age;
	char city;
};
struct student getdata();
struct student getdata()
{
	struct student s;
	printf("name of student: ");
	scanf("%s",&s.name);
	printf("roll number of student: ");
	scanf("%d",&s.roll_no);
	printf("mobile number of student: ");
	scanf("%d",&s.mobno);
	printf("age of student: ");
	scanf("%d",&s.age);
	printf("city of student: ");
	scanf("%s",&s.city);
	return s;
}
struct student s[2];

int main()
{
	
   int num,i;
   FILE *fp;

   fp = fopen("student.txt","w");
   
  
    for (i = 0; i < 2; i++){
	
	   printf("student %d\n",i+1);
	   s[i]=getdata();}
	for (i = 0; i < 2; i++){
		printf("%d",i);
		printf("name of student %s \t roll number of student %d \n mobile number of student %d\tage of student:%d\tcity of student: %s",s[i].name,s[i].roll_no,s[i].mobno,s[i].age,s[i].city);
	}
	
	
   
   fclose(fp);
 

   return 0;
}
