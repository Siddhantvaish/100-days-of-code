//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isDistinct = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < cols; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct) break;
    }
    if(isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
