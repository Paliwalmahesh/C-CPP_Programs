#include<stdio.h>

void main()
{
	
	int m,n,sum;
	printf("enter digit:\n");
	scanf("%d",&n);
	
while(n>0)    
{    
m=n%10;
    
sum=sum+m;
    
n=n/10;    
}
  printf("sum=%d",sum);    	
	
	
	
	
	
	
}

