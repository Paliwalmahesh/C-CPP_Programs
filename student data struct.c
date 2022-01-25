#include<stdio.h>
struct student
{
	char name[10];
	int roll_no;
	float cgpa;
};
struct student getdata();
void display(struct student s);
void search(struct student s);
struct student s[5];
void search(struct student s){
	if (s.cgpa>8)
	   printf("%s\n",s.name);

}
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
void display(struct student s)
{
	printf("name of student %s \troll number of student %d \tcgpa of student %f\n",s.name,s.roll_no,s.cgpa);
}
void main() 
{
	int i;
	//struct student s;
	for (i = 0; i < 5; i++){
	
	   printf("student %d\n",i+1);
	   s[i]=getdata();}
    for (i = 0; i < 5; i++){
	
         printf("student %d\n",i+1);
	     display(s[i]);}
	     
    for (i = 0; i <5; i++){
    	
    	search(s[i]);
	}
}
