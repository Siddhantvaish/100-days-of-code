/*Q1: Write a program to input two numbers and display their sum.*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	int sum=0;
	sum = a+b;
	printf("the sum is %d", sum);
	return 0;
	
}
