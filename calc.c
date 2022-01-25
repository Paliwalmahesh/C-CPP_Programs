#include<stdio.h>
int addNumbers(int a, int b);
int subNumbers(int a, int b);
int multiNumbers(int a, int b);
int divNumbers(int a, int b);
int a,b,c,ch;
int result;

void main()
{ 
  
    
     printf("enter two numbers\n");
     scanf("%d %d",&a,&b);
     printf("\nEnter\n1.adition\n2.substaction\n3. multiplication \n4.divsion ");
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:
	     	 addNumbers( a, b);
	     	 printf("result %d\n",result);
	     	 break;
	     case 2:
	     	 subNumbers( a,  b);
	     	  printf("result %d\n",result);
	     	  break;
	     case 3:
	     	 multiNumbers( a,b);
	     	  printf("result %d\n",result);
	     	  break;
		 case 4: 
		      divNumbers( a, b);
			   printf("result %d\n",result);
			   break;	
	
    }
}
int addNumbers(int a, int b)           
{
   
    result = a+b;
    return result;
}
int subNumbers(int a, int b)          
{
    
    result = a-b;
    return result;
}
int multiNumbers(int a, int b)        
{
    
    result = a*b;
    return result;
}
int divNumbers(int a, int b)            
{
    
    result = a/b;
    return result;
}

