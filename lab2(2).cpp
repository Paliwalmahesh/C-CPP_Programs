//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
using namespace std;
void swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;
	cout<<"\n inside the swap function after swapping a is  "<<x<<"  b ="<<y<<endl;
}
int main(){
	
	int a,b;
	cout<<"enter num a :";
	cin>>a;
	cout<<"enter num b :";
	cin>>b;
	cout<<"before swapping a is "<<a<<"and b is "<<b<<endl;
	swap(a,b);
	cout<<"after swapping a is  "<<a<<"and b is "<<b<<endl;
	return 0;
	
}
