#include <stdio.h> 

  int main() 
{ 
    int n;
    printf("enter number");
	scanf("%d",&n); 
    int binaryNum[100]; 
    int i = 0; 
    int j;
    while (n > 0) 
	{  binaryNum[i] = n % 2; 
        n = n / 2; 
        i++;
		 
    } 
    
    for ( j = (i - 1); j >= 0; j--)
	    printf("%d" ,binaryNum[j]); 
    return 0; 
} 
 

