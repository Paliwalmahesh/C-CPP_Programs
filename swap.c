#include<stdio.h>
int first, second, temp;
void swapV(int first,int second);
void swap(int *x,int *y);
int main() 
{
      
      printf("Enter first number: ");
      scanf("%d", &first);
      printf("Enter second number: ");
      scanf("%d", &second); 
      swapV(first, second);
      swap(&first, &second);
      
}
void swapV(int first,int second)
{
      
      temp = first;
      first = second;
      second = temp;

      printf("\nAfter swapping, firstNumber = %d", first);
      printf("\nAfter swapping, secondNumber = %d", second);
}
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
    printf("\nAfter swapping, firstNumber = %d", *x);
    printf("\nAfter swapping, secondNumber = %d", *y);
    
}


