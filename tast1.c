#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,N;
    

    scanf("%d",&N);    
    for(i=2;i<=N;i++)
    {
        int k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
         
       if(k==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
