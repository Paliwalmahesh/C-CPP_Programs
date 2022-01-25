/* accept marks of student in 3 subjects and display % alongwith class obtained*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int mar1 ,mar2 ,mar3 ;
	float per;
	
	label:
	cout<<"enter marks of student :"<<endl;
	cin>>mar1>>mar2>>mar3;
	
	if(mar1>100 || mar2>100 || mar3>100)
	  {
	  	cout<<"enter correct marks"<<endl;
	  	goto label;
	  }
	
	per=(mar1+mar2+mar3)/3;
	cout<<"optained parcents are :"<<per<<endl;
	
	if(per<35)
	  cout<<"fail "<<endl;
	if(per>=35 && per<50)
	  cout<<"pass class"<<endl;
	if(per>=50 && per<60)
	  cout<<"second class"<<endl;
	if(per>=60 && per<75)
	  cout<<"first class"<<endl;
	if(per>=75)
	  cout<<"destingstion"<<endl;
	getch();            
}
