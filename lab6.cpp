//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
#include<cstring>
using namespace std;

class mystring{
	char *str;
	public:
		mystring();
		mystring(char* val);
		mystring(mystring& x);
		void read();
		void display();
		
};
mystring::mystring(){
	cout<<"contructor is called\n";
	str = new char[1];
	str[0] = '\0';
}
mystring::mystring(char* val){
	cout<<"\nparametarized contructor is called\n";
	str = new char[strlen(val)];
	strcpy(str, val);
}
mystring::mystring(mystring& x){
	cout<<"\nCopy contructor is called\n";
	str = new char[strlen(x.str)];
	strcpy(str, x.str);
}
void mystring::read(){
	cout<<"\n enter the string\n";
	cin.get(str,20);
}
void mystring::display(){
	cout<<str<<endl;
}
int main(){
	
	mystring s;
	s.read();
	s.display();
	char c[20]="G8_batch";
	mystring s2(c);
	s2.display();
	mystring s3(s2);
	s3.display();
	return 0;
	
}
