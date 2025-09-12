//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 1, ans = 1;
    while (i <= n) {
        ans = ans * i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, ans);
    return 0;
}
