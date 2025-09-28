// Q5. Write a program to input a 4 digit number and print the sum of digits.

#include<stdio.h>

int main(){
	int num, sum=0, digit;
	
	printf("Enter a 4 digit number: ");
	scanf("%d", &num);
	
	while(num>0) {
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	printf("Sum of digits = %d\n ", sum);
	return 0;
}
