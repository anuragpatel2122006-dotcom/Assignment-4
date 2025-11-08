#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    
    if (r1 == r2 && c1 == c2) {
        printf("\nAddition of matrices:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition not possible (different dimensions)\n");
    }

   
    if (r1 == r2 && c1 == c2) {
        printf("\nSubtraction of matrices:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sub[i][j] = a[i][j] - b[i][j];
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nSubtraction not possible (different dimensions)\n");
    }

    
    if (c1 == r2) {
        printf("\nMultiplication of matrices:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                    mul[i][j] += a[i][k] * b[k][j];
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (column of A ≠ row of B)\n");
    }

    return 0;
}