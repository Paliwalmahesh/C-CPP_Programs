#include <stdio.h>
    void main()
    { 
      int n,m,i;
       printf(" number of elements  in the array :");
       scanf("%d",&n);
       int array1[n];
       int array2[n];
        printf("enter the element of an array \t");
        for (i = 0; i < n; i++)
            scanf("%d", &array1[i]);
 
        for (i = 2; i < n; i++)
            array1[i]=array2[i-2];
	    printf(" elements of a given array1 \n");
        for (i = 0; i < n; i++)
            printf( "%d\t", array1[i]) ;
         printf(" \nelements of a given array2 \n");
        for (i = 0; i < n; i++)
            printf( "%d\t", array2[i]);      
}
        
