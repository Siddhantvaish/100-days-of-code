//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], rowSum[m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Row sums are:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }
    return 0;
}
