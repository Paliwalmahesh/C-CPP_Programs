#include<iostream>
using namespace std;
class complex{
double img,real;
public:
	void read();
	void display();
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);
	complex operator~();
};
void complex::read(){
		cout<<"enter real part of complex num "<<endl;
			cin>>real;
			cout<<"enter imaginary part of complex num "<<endl;
			cin>>img;
}
void complex::display(){
	if(img<0)
		cout<<real<<"-i"<<-img<<endl;
	else
		cout<<real<<"+i"<<img<<endl;
}
complex complex::operator+(complex c2){
	complex temp;
	temp.img=img+c2.img;
	temp.real=real+c2.real;
	return temp;
}
complex complex::operator-(complex c2){
	complex temp;
	temp.img=img-c2.img;
	temp.real=real-c2.real;
	return temp;
}
complex complex::operator*(complex c2){
	complex temp;
	temp.img=(real*c2.img)+(img*c2.real);
	temp.real=(real*c2.real)-(img*c2.img);
	return temp;
}
complex complex::operator/(complex c2)
		{	
		complex temp;
		temp=(*this)*(~c2);
		temp.real=temp.real/(c2.real*c2.real+c2.img*c2.img);
	    temp.img=temp.img/(c2.real*c2.real+c2.img*c2.img);
	    return temp;	
		}	
complex complex::operator~()
		{
			complex temp;
	        temp.real=real;
	        temp.img=-(1*img);
	        return temp;
		}
int main(){
	complex c1,c2,c3,c4,c5,c6;
	int ch;
	c1.read();
	c2.read();
	c1.display();
	c2.display();
	do{
 		cout<<endl;
 		cout<<"0 - Exit.\n1 - Add \n2 - sub\n3 - multi\n4 - Divsion"<<endl;
		cin>>ch;
        switch(ch){
            case 0: 
				break;
        	case 1:
            	c3=c1+c2;
            	cout<<"addition of 2 numbers "<<endl;
            	c3.display();
                break;
                 
            case 2:
                c4=c1-c2;
                cout<<"subtraction of 2 numbers "<<endl;
                c4.display();
             	break;
            case 3:
                c5=c1*c2;
                cout<<" multiplication of 2 numbers "<<endl;
                c5.display();
             	break;
            case 4:
                c6=c1/c2;
                cout<<"Division of 2 numbers "<<endl;
                c6.display();
             	break;
             
            default:
                cout<<"An Invalid choice."<<endl;
        }   
    }while(ch!=0);
	return 0;
}
