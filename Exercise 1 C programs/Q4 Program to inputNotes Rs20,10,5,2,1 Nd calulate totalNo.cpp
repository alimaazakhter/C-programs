// Write a program to input total notes of Rs20,10,5,2 and 1 and Calculate total.amt

#include<stdio.h>

int main() {
	int n20, n10, n5, n2, n1, total_amount;
	printf("Enter the no. of 20 rupees note : ");
	scanf("%d", &n20);

	printf("Enter the no. of 10 rupees note : ");
	scanf("%d", &n10);
	
	printf("Enter the no. of 5 rupees note : ");
	scanf("%d", &n5);
	
	printf("Enter the no. of 2 rupees note : ");
	scanf("%d", &n2);
	
	printf("Enter the no. of 1 rupees note : ");
	scanf("%d", &n1);

	total_amount = (n20*20) + (n10*10) + (n5*5) + (n2*2) + (n1*1);
	
	printf("Total amount is Rs. %d\n ", total_amount);
}

