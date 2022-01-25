#include<stdio.h>
int f1(int b);
main()
{
    int x;
    x=f1(10);
    printf("%d",x);
}
f1(int b)
{
    if(b==0)
        return 0;
    else
    {
        printf("x");
        f1(b--);
    }
}
