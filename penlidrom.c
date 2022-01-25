#include <stdio.h>
    void main()
    {   
       int n,i,j=0,r,reversedN;
       printf(" number of elements  in the array :");
       scanf("%d",&n);
       int a[100];
       int b[100];
       for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
    for (i = 0; i < n; i++){
	
     while (a[i] != 0) {
        r = a[i] % 10;
        reversedN = reversedN * 10 + r;
        a[i] /= 10;
    }

    if (a[i] == reversedN)
        b[j]=a[i];
        j++;
}
for (i = 0; i < n; i++)
            printf( "%d\t", b[i]) ;
}


    
    
