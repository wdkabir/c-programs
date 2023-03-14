//Write a program to find the sum of the diagonal elements of a square matrix.
#include <stdio.h>

int main()
{
    int i, j, n, sum = 0;
    int matrix[10][10];

    // User to input the size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // User to input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements
    for (i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    // Display the sum of diagonal elements
    printf("The sum of diagonal elements of the matrix is %d", sum);

    return 0;
}
