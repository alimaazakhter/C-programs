#include<stdio.h>

int main() {
	float r, circumference;
	printf("\n Enter the radius of the cirle: ");
	scanf("%f", &r);
	
	circumference = 2*3.14*r;
	printf("\n Circumference of the circle %2f", circumference);
	
	return 0;
}
