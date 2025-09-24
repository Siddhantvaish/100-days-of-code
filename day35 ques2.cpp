//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }
    int arr[100];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k (number of positions to rotate right): ");
    scanf("%d", &k);
    k = k % n;
    if (k < 0) k = (k + n) % n;
    int rotated[100];
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotating right by %d: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}
