#include <iostream>  
using namespace std;  
int main()  
{  
int n, reverse=0, rem,i;    
for(i=10;i<1000;i++){
   n=i;  
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 if(reverse*i==39483){
      cout<<"parameter "<<reverse+i<<endl;
	  break;}
	  reverse=0;     
 }
 return 0; 
}
