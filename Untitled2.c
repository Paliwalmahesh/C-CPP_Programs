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
  
  
  for(i=0; i<2; i++)
    {
        temp=arr[len-1];
        for(j=len-1; j>0; j--)
        {
           arr[j]=arr[j-1];
		}
 
         arr[j]=temp;
        
 
    }
   printf("\n after right rotation array is :\n");
   for (i = 0; i < len; i++) {
      printf( "%d\t", arr[i]);
   }
}
