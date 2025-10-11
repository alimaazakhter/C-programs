/* Q6. Write a program to find whether one is allowed to enter in waterpark. You are allowed to enter 
awaterpark only if your height is between 3.5 and 6 feet. */

#include<stdio.h>

int main()
{
	float height;
	printf("\n Enter your height: ");
	scanf("%f", &height);
	
	if (height >= 3.5 && height <=6)
	{
		printf("You are allowed");
	}
	else 
	{
		printf("Sorry!! You are not allowed");
	}
	return 0; 
}
