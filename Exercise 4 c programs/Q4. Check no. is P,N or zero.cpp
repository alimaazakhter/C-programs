//Q4. Write a program to input a number and check whether it is positive, negative, or zero.

#include<stdio.h>

int main() {
	int num;
	printf("Enter the number : \n");
	scanf("\n %d", &num);
	if(num>0)
	{
		printf("%d is positive", num);
	}
	else
	{
		if(num<0)
		{
			printf("%d is negative", num);
		}
		else
		{
			printf("%d is zero");
		}
	}
	return 0;
}
