/*Q6: Write a program to swap two numbers using a third variable.*/
#include <stdio.h>
int main() {
    int a, b, x;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    a = b;
    b = x;
    printf("After swap: %d %d", a, b);
    return 0;
}

