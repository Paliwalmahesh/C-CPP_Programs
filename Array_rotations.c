#include<stdio.h>
int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, N, len, j;
   N=2;
   len=10;
   int temp=0;
   printf("before rotation array is :\n");
   for (i = 0; i < len; i++) {
      printf( "%d\t", arr[i]);}
  
  
   for (i = 0; i < N; i++) {
      int x = arr[0];
      for (j = 0; j < len; j++) {
         temp=arr[j];
         arr[j] = arr[j + 1];
         arr[j+1]=temp;
      }
      arr[len - 1] = x;
   }
   printf("\n after  left rotation array is :\n");
   for (i = 0; i < len; i++) {
      printf( "%d\t", arr[i]);
   }
}

