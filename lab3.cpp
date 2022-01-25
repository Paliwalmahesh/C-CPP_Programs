//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
using namespace std;
class complex{
	
	float img;
	float real;
	public:
		void read(){
			cout<<"enter real part of complex num "<<endl;
			cin>>real;
			cout<<"enter imaginary part of complex num "<<endl;
			cin>>img;
			
		}
		void display();
		complex add(complex);
		complex sub(complex);
		complex multi(complex);
	
		complex div(complex);
		complex con();
		
};

void complex::display(){
	if(img<0)
		cout<<real<<"-i"<<-img<<endl;
	else
		cout<<real<<"+i"<<img<<endl;
}
complex complex::add(complex c2){
	complex temp;
	temp.img=img+c2.img;
	temp.real=real+c2.real;
	return temp;
}
complex complex::sub(complex c2){
	complex temp;
	temp.img=img-c2.img;
	temp.real=real-c2.real;
	return temp;
}
complex complex::multi(complex c2){
	complex temp;
	temp.img=(real*c2.img)+(img*c2.real);
	temp.real=(real*c2.real)-(img*c2.img);
	return temp;
}

complex complex::div(complex c2)
		{	
		complex t1;
		t1=multi(c2.con());
		t1.real=t1.real/(c2.real*c2.real+c2.img*c2.img);
	    t1.img=t1.img/(c2.real*c2.real+c2.img*c2.img);
	    return t1;	
		}
		
complex complex:: con()
		{
			complex temp;
	        temp.real=real;
	        temp.img=-(1*img);
	        return temp;
		}
		



int main(){
	complex c1,c2,c3,c4,c5,c6;
	c1.read();
	c1.display();
	c2.read();
	c2.display();
	c3=c1.add(c2);
	cout<<"addition of 2 numbers "<<endl;
	c3.display();
	c4=c1.sub(c2);
		cout<<"subtraction of 2 numbers "<<endl;
	c4.display();
	c5=c1.multi(c2);
		cout<<"multiplication of 2 numbers "<<endl;
	c5.display();
		cout<<"division of 2 numbers "<<endl;
	c6=c1.div(c2);
	c6.display();
}
