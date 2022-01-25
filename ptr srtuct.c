#include<stdio.h>
struct student
{
	char name[10];
	int roll_no;
	float cgpa;
};
struct student s;

void main()
{
	//struct student s;
	printf("%d",sizeof(s));
	struct student*s1;
	s1=&s;
	s1->name="mahesh";
	s1.->s.roll_no=22442;
	s1->s.cgpa=8.8;
	
	printf("name of student %s \nroll number of student %d \ncgpa of student %f",s1.name,s1.roll_no,s1.cgpa);
	
}
