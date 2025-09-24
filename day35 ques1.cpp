//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n < 2) {
        printf("Second largest element not possible!\n");
        return 0;
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    int second = -1;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < largest) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No second largest element (all elements equal)\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}
