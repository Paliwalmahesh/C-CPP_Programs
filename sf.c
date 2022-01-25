#include<stdio.h>
int factorial(int x);
void main()
 {
    int n;
    printf("\nEnter the value of number:");
    scanf("%d",&n);
    int c=factorial(n);
    printf("The factorial is %d",c);
}
int factorial (int x)
{
    int i, f=1;
    for(i=1;i<=x;i++)
    {
        
        printf("%d\n",i);
        printf("%d\n",f);
        f=f*i;
    }
     return f;
   
}
