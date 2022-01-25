//Mahesh dhanraj Paliwal
//Roll No:22442
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
void stack::push()
{
	try{
		if(top!=size-1){
			cout<<"enter number"<<endl;
			top++;
			cin>>s[top];
			}
		else
			throw(top);
		}
	catch (int top){
		cout<<"stack overflow!!!!";
	}				
}
void stack::pop(){
	int temp;
	try{
		if(top!=-1){
			temp=s[top];
	    	top--;
			cout<<top<<endl;
	   		cout<<temp<<"poped"<<endl;
		}
		else{
			throw(top);
		}
	}
	catch(int top){
		cout<<"stack is Empty!!!!";
	}
	
}
void stack::display(){
	int i;
	try{
		if(top!=-1){
			for(i=0;i<top+1;i++)
			{
			cout<<s[i]<<endl;
			}
		}
		else{
			throw(top);
		}
	}
	catch(int top){
		cout<<"stack is Empty!!!!";
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





