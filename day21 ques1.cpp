//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, first, last, digits = 0, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    last = n % 10;
    while(n > 0) {
        first = n % 10;      
        n = n / 10;
        digits++;
    }
    for(int i = 1; i < digits; i++) {
        pow10 = pow10 * 10;
    }
    int middle = (original % pow10) / 10;
    int result = last * pow10 + middle * 10 + first;
    printf("Number after swapping = %d\n", result);
    return 0;
}
