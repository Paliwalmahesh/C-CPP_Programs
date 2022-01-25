#include <stdio.h>

int main() {
   int array[5];
   int sum, l,i;
   
   printf("enter the element of an array \n");

   
   for (i = 0; i < 5; i++)
        scanf("%d", &array[i]);
   
   for(l = 0; l < 5; l++) {
      sum = sum + array[l];
   }
   
   
   printf("sum of array values is %d", sum);   
   
   return 0;
}
