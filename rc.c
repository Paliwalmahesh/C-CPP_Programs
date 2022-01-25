/*consider the series which having difference between two terms is twice the (n-1)th term then
find sum of all prime number from the series of 15 terms*/
//level:junior
//Ans:39236
#include <stdio.h>
int main() 
{
    int i, j, n, a = 0, t1 = 0, t2 = 1, nextTerm, flag;

for (i = 1; i <= 15; ++i) 
    {
	    flag=0;
        if(t1>2)
		{
        	for (j = 2; j <= t1 / 2; j++) 
			{
                if (t1 % j == 0) 
				{
		        flag=1;
		        break;
				}
			}   
			if(flag==0)
			{ 
				printf("%d\t ", t1+a);
				a=(a+t1);
			}
		}
        nextTerm = t1 + (2*t2);
        t1 = t2;
        t2 = nextTerm;
    }
}

