#include<iostream> 
using namespace std; 
  
class number 
{ 
    int x; 
public: 
    void inputs() {  } 
}; 
  
class number1
{ 
    int x; 
public: 
    virtual void inputs() {  } 
}; 
  
int main(void) 
{ 
    cout<<sizeof(number); 
    cout<<sizeof(number1); 
    return 0; 
} 
/*1.4,8
2.4,4
3.depend on bit of compiler(32/64)
4.4,16*/

