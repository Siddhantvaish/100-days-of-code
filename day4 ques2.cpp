//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main(){
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (i <= n) {
    sum += i;
    i++;
    }
    printf("Sum=%d\n", sum);
    return 0;
}
