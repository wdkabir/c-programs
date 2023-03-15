/*Write a C program to input the dimension and elements of two matrices from the user.
Then perform matrix addition and display the final matrix.*/
#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the dimensions of the matrices (m x n): ");
    scanf("%d %d", &m, &n);
    int matrix1[m][n], matrix2[m][n], sum[m][n];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The sum of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
