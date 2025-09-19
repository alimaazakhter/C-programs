#include<stdio.h>

int main() {
	int area, length, breadth;
	
	printf("\n Enter the length: ");
	scanf("%d", &length);
	
	printf("\n Enter the breadth: ");
	scanf("%d", &breadth);
	
	area=length*breadth;
	printf("\n The area of the rectangle is : %d\n", area);
	
	return 0;
}
