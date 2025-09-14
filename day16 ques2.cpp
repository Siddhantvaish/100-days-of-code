//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reversed = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }
    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
