//Write a program to input characters from the user into a two dimensional array and display those elements in the shape of a matrix. Note that the dimension of the array should be 3 by 4. 
#include <stdio.h>

int main()
{
    char matrix[3][4];
    int i, j;

    // Input characters from user and store in array
    printf("Enter 12 characters to fill the 3x4 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf(" %c", &matrix[i][j]);
        }
    }

    // Display the array as a matrix
    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
