#include<stdio.h>
void main()

{
    int x=1,a,b,c;
    int sum=0;
    printf("Start of while loop\n");
    scanf("%d %d",&a,&b);
    c=(b-a);
    for(x=a;x<=b;)
    {
    sum=sum+x;
    x=x+1;
    printf("Sum value inside loop is %d\n",sum);
    }
    printf("Sum of first %d is %d\n",c,sum);
   
}
