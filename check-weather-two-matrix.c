#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int row1, col1, row2, col2;
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the elements of the first matrix:\n");
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &row2, &col2);

    printf("Enter the elements of the second matrix:\n");
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if the matrices have the same dimensions
    if(row1 != row2 || col1 != col2) {
        printf("The matrices are not equal.\n");
        return 0;
    }

    // Check if the corresponding elements of the matrices are equal
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                printf("The matrices are not equal.\n");
                return 0;
            }
        }
    }

    printf("The matrices are equal.\n");

    return 0;
}
