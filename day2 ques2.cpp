/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
int main(){
	float r,area,circumference,pi = 3.14;
	printf("enter the radius of the circle : ");
	scanf("%f",&r);
	area = pi*r*r;
	circumference = 2*pi*r;
	printf("Area of the circle is %.2f\n",area);
	printf("Circumference of the circle is %.2f",circumference);
	return 0;
}
