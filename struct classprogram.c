#include<stdio.h>
struct student
{
	char name[10];
	int roll_no;
	float cgpa;
};
struct student getdata();
void display(struct student s1);
void main() 
{
	struct student s;
	s=getdata();
	display(s);
}

struct student getdata()
{
	struct student s1;
	printf("name of student: ");
	gets(s1.name);
	printf("roll number of student: ");
	scanf("%d",&s1.roll_no);
	printf("cgpa of student: ");
	scanf("%f",&s1.cgpa);
	return s1;
}
void display(struct student s1)
{
	printf("name of student %s \nroll number of student %d \ncgpa of student %f",s1.name,s1.roll_no,s1.cgpa);
}

