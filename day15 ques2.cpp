//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("The reversed number is: %d\n", reversed);
    return 0;
}
