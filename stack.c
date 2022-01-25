#include <stdio.h>   
int stack[100],i,j,ch=0,n,top=-1;  
void push();  
void pop();
void peek();  
void display();  
void main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
    while(ch != 5)  
    {  
        printf("Choose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
             case 4:  
            {  
                peek();  
                break;  
            }  
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter element:");  
        scanf("%d",&val);         
        top ++   ;
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
      top = top -1;    
}   
void display()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
void peek(){
	if(top ==-1){
		printf("Stack is empty"); 
	}
	else{
		printf("The top element is %d\n",stack[top]);
	}
}
