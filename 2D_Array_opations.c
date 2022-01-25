#include <stdio.h>
int main() {
    int r, c, a[100][100], b[100][100], sum[100][100],sub[100][100],multi[100][100],div[100][100], i, j;
    printf("Enter the number of rows :");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element of index %d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element of index %d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sub[i][j] = a[i][j] - b[i][j];
        }
        
    printf("\n subtration of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sub[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            multi[i][j] = a[i][j] * b[i][j];
        }
        
    printf("\nmulti of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", multi[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            div[i][j] = a[i][j] / b[i][j];
        }
        
    printf("\ndiv of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", div[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }

    return 0;
}
