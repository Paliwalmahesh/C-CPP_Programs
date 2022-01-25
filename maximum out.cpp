//maximum out if three num//
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
    int a,b,c;
    
	cout<<"enter three numbers"<<endl;
	
	cin>>a>>b>>c;
 if(a==b && b==c)
   {
     cout<<"all are equal";   
   }	
else	
    {
	if(a>b)
	    {
	    if(a>c)
		  cout<<"maximum number is "<<a;
		else
		  cout<<"maximum number is"<<c;
	    }
	else
	    {
	  	 if(b>c)
		  cout<<"maximum number is "<<b;
		else
		  cout<<"maximum number is"<<c;
	   }
    }
    getch();
       
 } 
