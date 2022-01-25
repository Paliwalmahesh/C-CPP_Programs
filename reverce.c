#include <stdio.h>
    void main()
    {
 
        int array[5];
        int i;
        printf("enter the element of an array \n");
        for (i = 0; i < 5; i++)
            scanf("%d", &array[i]);
 
        printf(" elements of a given array \n");
        for (i = 4; i >-1; i--)
            printf( "%d\n", array[i]);
    }
