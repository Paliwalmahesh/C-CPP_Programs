#include <stdio.h>

int main() {

int array[100], position, c, n;

    printf("Enter number of elements in array:");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("location want to delete element   ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\nDeletion not possible\n");
    else 
        for(c = position-1; c < n-1; c++)
        array[c] = array[c+1];

    printf("\n\nResultant array is: ");
    for(c = 0; c < n-1; c++) 
        printf("%d  ", array[c]);
    return 0;
}
    
