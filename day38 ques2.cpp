//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int symmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
