#include<stdio.h>
int main()
{
    int c, f_term = 0, s_term = 1, l_term, i;
 
    
    printf("Enter the number of terms:\n");
    scanf("%d",&c);
 
    printf("First %d terms of Fibonacci series:\n",c);
    for ( i = 0 ; i < c ; i++ )
    {
       if ( i <= 1 )
          l_term = i;
       else
       {
          l_term = f_term + s_term;
          f_term = s_term;
          s_term = l_term;
       }
       printf("%d\n",l_term);
    }
 
    return 0;
}
