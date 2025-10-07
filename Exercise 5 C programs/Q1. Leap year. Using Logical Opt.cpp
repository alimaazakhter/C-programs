// Q1. check it is a leap year or not. use Logical operator

#include<stdio.h>

int main(){
	int y;
	printf("\n Enter year: ");
	scanf("%d", &y);
	
	if((y%400==0) || (y%4==0) && (y%100!=0))
	{
		printf("Leap year");
	}
	else {
		printf("Not a Leap year");
	}
	return 0;
}
