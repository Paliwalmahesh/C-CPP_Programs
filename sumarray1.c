#include <stdio.h>
    void main()
    {   
       int n,m,c;
       printf(" number of elements  in the array :");
       scanf("%d",&n);
       printf(" number of elements  in the array :");
       scanf("%d",&m);
 
        int array1[n];
        int array2[m];
        int array3[c];
        int i;
        printf("enter the element of an array1 \t");
        for (i = 0; i < n; i++)
            scanf("%d", &array1[i]);
        int j;
        printf("enter the element of an array2 \t");
        for (j = 0; j < m; j++)
            scanf("%d", &array2[j]);
        printf(" elements of a given array1 \n");
        for (i = 0; i < n; i++)
            printf( "%d\t", array1[i]) ;
         printf(" \nelements of a given array2 \n");
        for (i = 0; i < m; i++)
            printf( "%d\t", array2[i]);
        for ( i=0; i<n ;i++) 
	{ 
		array3[i]=array1[i]+array2[i]; 
	}
	printf(" \nelements of a given array3 \n");
        for (i = 0; i < n; i++)
            printf( "%d\t", array3[i]); 
	}
