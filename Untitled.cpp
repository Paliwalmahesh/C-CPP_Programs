#include <iostream>  
using namespace std;  
int i,n;
int main(){
for(i=10;i<100;i++)
{
   cout<<i;
    n=i; 
  int rem,reverse=0; 
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }
     
 cout<<"Reversed Number: "<<reverse<<endl;}
}
