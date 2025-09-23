//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num, digit;
    int count[10] = {0};
    int maxDigit = 0, maxCount = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for (digit = 0; digit <= 9; digit++) {
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }
    printf("%d", maxDigit);
    return 0;
}
