#include<stdio.h>

int main()
{ 
    int a,b,c;
    
	 printf("name:Mahesh d. Paliwal\nroll no:22442\n");
     printf("enter three numbers\n");
     
	 scanf("%d %d %d",&a,&b,&c);
 if(a==b && b==c)
   {
     printf("all are equal");   
   }	
else	
    {
	if(a>b)
	    {
	    if(a>c)
		  printf("maximum number is %d ",a);
		else
		  printf("maximum number is %d",c);
	    }
	else
	    {
	  	 if(b>c)
		  printf("maximum number is %d ",b);
		else
		  printf("maximum number is %d",c);
	   }
    }
       
 } 
