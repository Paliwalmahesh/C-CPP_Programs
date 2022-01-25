#include<iostream>
using namespace std;

class stack
{
	int s[100],top,size;
	public:
		stack();
		~stack();
		void push();
		void pop();
		int isEmpty();
		int isFull();
		void display();
};


stack::stack()
{
	top=-1;
	cout<<"enter size "<<endl;
	cin>>size;
	cout<<"stack is initiallize"<<endl;
	
	
}
stack::~stack()
{
	delete s;
	cout<<"stack is destructed"<<endl;

}
int stack::isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int stack::isFull()
{
	if(top==size-1)
		return 1;
	else
		return 0;
}
void stack::push()
{
	int a;
	a=isFull();
	if(a==1){
		cout<<"stack overflow!!!!";
		
	}
	else{
		cout<<"enter number"<<endl;
		top++;
		cin>>s[top];
		
	}		
}
void stack::pop(){
	int temp,a;
	a=isEmpty();
	if(a==1)
        cout<<"stack is Empty!!!!";
	else{

	    temp=s[top];
	    top--;
		cout<<top<<endl;
	   cout<<temp<<"poped"<<endl;
	   	}
}
void stack::display(){
	int a,i;
	a=isEmpty();
	if(a==1)
        cout<<"stack is Empty!!!!";
	else{
	for(i=0;i<top+1;i++){
		cout<<s[i]<<endl;
	}
	}
	 
}
int main(){
	int ch;		
	stack s1;
	do{
 		cout<<endl;
 		 cout<<"0 - Exit."<<endl;
        cout<<"1 - Push ."<<endl;
        cout<<"2 - Pop ."<<endl;
        cout<<"3 - Display ."<<endl;
        	cin>>ch;
        
        switch(ch){
            case 0: 
				break;
        	case 1:
            	s1.push();
                break;
                 
            case 2:
                s1.pop();
             	break;
            case 3:
            	s1.display();
             	break;
             
            default:
                cout<<"An Invalid choice."<<endl;
        }   
          
    }while(ch!=0);
    return 0;

}





