//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
using namespace std;
int main(){
	
	int a; 
	int &b=a; 
	cout<<"enter a no for variable a \n";
	cin>>a;
	cout<<"\na= "<<a<<"\t"<<"b="<<b<<endl;
	cout<<"enter a no for variable b \n";
	cin>>b;
	cout<<"\na= "<<a<<"\t"<<"b="<<b<<endl;
	cout<<"address of variable a is"<<&a<<endl;
	cout<<"address of variable a is"<<&b;
	return 0;
}
