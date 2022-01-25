//accept the rate and qty from user and display thh net payable amount and alo offerthe 10% discount if the no of qty is >= 100//
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int rate ,qty ,disc_per ,ttl_amt;
	
	cout<<"Enter the rate and qty of item;"<<endl;
	
	cin>>rate>>qty;
	
	if(qty>=100)
	    disc_per=10;
	else
	    disc_per=0;
		
	ttl_amt=(qty*rate)-(qty*rate*disc_per/100);
	
	cout<<"net amt to pay :"<<ttl_amt<<endl;         
	getch();
}
