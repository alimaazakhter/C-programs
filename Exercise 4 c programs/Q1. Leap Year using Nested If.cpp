//Q1. Write a program to input an year and check whether it is a leap year. Use nested if-else.

#include<stdio.h>
int main() {
	int y;
	printf("Enter the year: ");
	scanf("\n %d", &y);
	if(y%400==0)
	{
		printf("Leap year", y);
	}
	else {
		if(y % 4 == 0) {
			if(y % 100 != 0)
			{
				printf("Leap Year", y);
			}
		}
		else {
			printf("Not a Leap year");
		}
	}
	return 0;
}
