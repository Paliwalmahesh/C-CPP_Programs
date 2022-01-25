#include<stdio.h>
#include <stdlib.h>

struct student
{
	char name[10];
	int roll_no;
	float cgpa;
};
struct student getdata();
struct student s[5];

struct student getdata()
{
	struct student s;
	printf("name of student : ");
	scanf("%s",&s.name);
	printf("roll number of student: ");
	scanf("%d",&s.roll_no);
	printf("cgpa of student: ");
	scanf("%f",&s.cgpa);
	return s;
}

void main() 
{
	int i;
	 FILE *fp;

   fp = fopen("student.txt","w");
   
	for (i = 0; i < 5; i++){
	
	   printf("student %d\n",i+1);
	   s[i]=getdata();}
    for (i = 0; i < 5; i++){
    	fprintf(fp,"name of student %s \troll number of student %d \tcgpa of student %f\n",s[i].name,s[i].roll_no,s[i].cgpa);
    	
    	
    }
    
    fclose(fp);
}
