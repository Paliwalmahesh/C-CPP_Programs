 #include <stdio.h>
void main()
{	 int array[5];
        
        int i;
        printf("enter the element of an array \t");
        for (i = 0; i < 5; i++)
            scanf("%d", &array[i]);
 
        printf(" elements of a given array \n");
        for (i = 0; i < 5; i++)
            printf( "%d\t", array[i]) ;
       
}
