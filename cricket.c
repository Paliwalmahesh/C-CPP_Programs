#include<stdio.h>
struct cricket_p
{
	char name[10];
	int age;
	int skill;
	
};
struct cricket_p getdata();
void display(struct cricket_p s);
void search(struct cricket_p s);
struct cricket_p s[5];
void search(struct cricket_p s){
	if (s.skill==1)
	   printf("batsman: %s\n",s.name);
	else if (s.skill==2)
	   printf("bowler %s\n",s.name);
	else if (s.skill==3)
	   printf(" all rounder%s\n",s.name);

}
struct cricket_p getdata()
{
	struct cricket_p s;
	printf("name of cricket player : ");
	scanf("%s",&s.name);
	printf("age number of cricket player: ");
	scanf("%d",&s.age);
	printf("skill of cricket player: ");
	label:
		{
		printf("\n1.batsman\n2.bowler\n3.all rounder");
	    scanf("%d",&s.skill);}
	if(s.skill>3)
	{
		printf("enter correct number");
		goto label;
	}
	return s;
}
void display(struct cricket_p s)
{
	printf("name of cricket_p %s \troll number of cricket_p %d \tskill of cricket_p %d\n",s.name,s.age,s.skill);
}
void main() 
{
	int i;
	//struct cricket_p s;
	for (i = 0; i < 5; i++){
	
	   printf("cricket_p %d\n",i+1);
	   s[i]=getdata();}
    for (i = 0; i < 5; i++){
	
         printf("cricket_p %d\n",i+1);
	     display(s[i]);}
	     
    for (i = 0; i <5; i++){
    	
    	search(s[i]);
	}
}
