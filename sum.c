#include<stdio.h>

void main()
{
   int  a, F_term, sum = 0;
 
  printf("enter first number:\n");
  
  scanf("%d/n",&F_term);
   
   for (a = F_term; a < F_term+10; a++)
    {
    	sum = sum + a;
    }
    printf("sum of numbers are:\n%d",sum);
}

   
