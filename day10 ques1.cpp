//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
    printf("The given sides form a valid triangle.\n");   
    if (a == b && b == c) {
    printf("It is an Equilateral Triangle.\n");
    }
    else if (a == b || b == c || a == c) {
    printf("It is an Isosceles Triangle.\n");
    }
    else {
    printf("It is a Scalene Triangle.\n");
    }    
    if ((a * a + b * b == c * c) ||
    (a * a + c * c == b * b) ||
    (b * b + c * c == a * a)) {
    printf("It is also a Right-angled Triangle.\n");
	}
	} else {
    printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}
