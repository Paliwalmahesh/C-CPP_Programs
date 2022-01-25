//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b,ch=0;
	float result;

	while(b !=5){
			getch();
			system("CLS");
			cout<<"enter two numbers\n";
    		cin>>a>>b;
     		cout<<"\nEnter\n1.adition\n2.substaction\n3. multiplication \n4.divsion\n5.exit ";
			cin>>ch;
	
			switch(ch)
		{
		     case 1:
		     	 result = a+b;
		     	 cout<<"result "<<result;
		     	 break;
		     case 2:
		     	 result = a-b;
		     	  cout<<"result "<<result;
		     	  break;
		     case 3:
		     	 result = a*b;
		     	  cout<<"result "<<result;
		     	  break;
			 case 4: 
			      result = a/b;
				   cout<<"result "<<result;
				   break;	
		
	    }
}
}
