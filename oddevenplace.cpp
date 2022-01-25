#include <stdio.h>
    void main()
    {
 
        int array[10];
        int i;
        printf("enter the element of an array \n");
        for (i = 0; i < 10; i++)
            scanf("%d", &array[i]);
 
       
        for (i = 0; i < 10; i++){
        	
        	if ((i%2)==0){
        	printf("even element of an array \n");
			printf( "%d\n", array[i]);}
		    else{
		    	printf("odd element of an array \n");
		    	printf( "%d\n", array[i]);
			}
		}
    }
