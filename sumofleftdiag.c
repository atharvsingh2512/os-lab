#include <stdio.h>

int main() {
    int i, j, rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding sum of left diagonal elements
    for(i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of left diagonal elements = %d\n", sum);

    return 0;
}