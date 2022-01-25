
#include <stdio.h>

int main() {
   int array[10];
   int sum, loop,i;
   float avg;
   printf("enter the element of an array \n");

   sum = avg = 0;
   for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);
   
   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }
   
   avg = sum / loop;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}
