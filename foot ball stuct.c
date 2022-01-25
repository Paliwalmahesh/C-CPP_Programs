#include<stdio.h>
struct football_p
{
	char name[10];
	int age;
	int goals;
	int match_played;
};
struct football_p getdata();
void display(struct football_p s);
void search(struct football_p s);
struct football_p s[5];
void search(struct football_p s){
	if (s.goals>5)
	   printf("football player%s of age %d made %d goals \n",s.name,s.age,s.goals);

}
struct football_p getdata()
{
	struct football_p s;
	printf("name of football player : ");
	scanf("%s",&s.name);
	printf("age number of football player: ");
	scanf("%d",&s.age);
	printf("goals of football player: ");
	scanf("%d",&s.goals);
	printf("match played by football player: ");
	scanf("%d",&s.match_played);
	return s;
}
void display(struct football_p s)
{
	printf("name of football_p %s \t age number of football_p %d \tgoals of football_p %d\tmatch played %d\n",s.name,s.age,s.goals,s.match_played);
}
void main() 
{
	int i;
	
	for (i = 0; i < 5; i++){
	
	   printf("football player %d\n",i+1);
	   s[i]=getdata();}
    for (i = 0; i < 5; i++){
	
         printf("football player %d\n",i+1);
	     display(s[i]);}
	     
	printf("playerswith more than 5 goals:\n");     
    for (i = 0; i <5; i++){
    	
    	search(s[i]);
	}
}
