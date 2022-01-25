#include <stdio.h>
    void main()
    {
 
        int array[5];
        int i,sume,sumo;
        printf("enter the element of an array \n");
        for (i = 0; i < 5; i++)
            scanf("%d", &array[i]);
 
       
        for (i = 0; i < 5; i++){
        	
        	if ((i%2)==0){
        	//printf("even position of an array \n");
			sume = sume + array[i];
			}
		    else{
		    	//printf("odd position of an array \n");
		    	sumo = sumo + array[i];
			}
		}
	    printf("sum of even place array values is %d\n", sume); 
	    printf("sum of odd place  array values is %d", sumo); 
    }
