#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
     printf(" number of elements  in the array :");
       scanf("%d",&n);
   
       printf("Input %d in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
     printf(" elements  in the first array  :\n");
    for(i=0; i<n; i++)
    {
        printf("% d", arr1[i]);
    }
    printf(" \nelements copied into  second array  :\n");
    for(i=0; i<n; i++)
    {
        printf("% d", arr2[i]);
    }
	       
}

    
    
