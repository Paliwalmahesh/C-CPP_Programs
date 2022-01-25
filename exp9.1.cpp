#include<iostream>
using namespace std;

template<typename T>

class calculator
{
T num1, num2;	
public:
calculator(T n1,T n2)
{
		   	 num1=n1;
		   	 num2=n2;
   }
 void display()
  {
		   	 cout<<"\nnumber are";
		   	 cout<<"\nnum1="<<num1<<"\nnum2="<<num2;
		   	 cout<<"\naddition="<<add();
		   	 cout<<"\nsubstraction="<<sub();
		   	 cout<<"\nmultiplication="<<mul();
		   	 cout<<"\ndivision="<<div();
}
 T add()
{
		   	 return(num1+num2);
 }
T sub()
{
		   	 return(num1-num2);
}
 T mul()
 {
		   	 return(num1*num2);
}

T div()
{
		   	
 return (num1/num2);
}
};

int main()
{
calculator<int>intcal(4,3);
intcal.display();
calculator<float>floatcal(2.2,3.4);
floatcal.display();
return 0;
}

