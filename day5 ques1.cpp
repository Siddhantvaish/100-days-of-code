//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amount = 1.0;
    printf("Enter principal rate and time; ");
    scanf("%f %f %f", &principal, &rate, &time);
    simpleInterest = (principal * rate * time) / 100;
    float multiplier = 1 + rate / 100;
    for (int i = 0; i < (int)time; i++) {
        amount *= multiplier;
    }
    compoundInterest = (principal * amount) - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f", simpleInterest, compoundInterest);
    return 0;
}

