#include<iostream>
using namespace std;
class basic
{
	char name[20];
	int id;
	public:
		void scan_b()
		{
			cout<<" Enter basic info of employee ";
			cout<<"\n\t Name of employee: ";
			cin>>name;
			cout<<"\t Id of employee: ";
			cin>>id;
		}
		void display_b()
		{
			cout<<"\n Entered basic info of employee ";
			cout<<"\n\t Name of employee is "<<name<<endl<<"\t Id of employee is "<<id;
		}
};

class dep
{
	char name_d[20];
	float sal;
	public:
		void scan_d()
		{
			cout<<" Enter department info of employee ";
			cout<<"\n\t Name of department: ";
			cin>>name_d;
			cout<<"\t Salary: ";
			cin>>sal;
		}
		void display_d()
		{
			cout<<"\n Entered department info of employee ";
			cout<<"\n\t Name of department is "<<name_d<<endl<<"\t Salary is "<<sal;
		}
};

class emp: public basic, public dep
{
	public:
		read()
		{
			basic::scan_b();
			dep::scan_d();
		}
		display()
		{
			basic::display_b();
			dep::display_d();
		}		
};

int main()
{
	int i,S;
	cout<<endl<<" Enter the size ";
	cin>>S;
	
	emp e[S];
	for(i=0;i<S;i++)
	{
		cout<<"\n Info for Emp no "<<i+1<<endl;
		e[i].read();
	}
	for(i=0;i<S;i++)
	{
		cout<<endl<<"\n Info of Emp no "<<i+1;
		e[i].display();
	}
}

