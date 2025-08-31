/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>
int main() {
    int num1, num2;
    int sum, diff, product, division;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    
    if (num2 != 0) {
    division = num1 / num2;
    printf("Division = %d\n", division);
	}
    else {
    printf("Division = undefined (cannot divide by zero)\n");
    }
    return 0;
}

