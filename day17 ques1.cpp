//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int num, originalNum, remainder, n = 0, power, i;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        power = 1;
        for (i = 1; i <= n; i++) {
            power = power * remainder;
        }
        result = result + power;
        temp = temp / 10;
    }
    if (result == originalNum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
