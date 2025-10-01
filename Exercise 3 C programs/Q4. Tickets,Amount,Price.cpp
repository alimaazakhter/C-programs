/* Q4.  A zoo offers discount for bulk purchase of entry tickets. If the number of tickets purchased 
is less than 10 the price per ticket is     5. If the number of tickets purchased is more than 10 
the price per ticket is 4. Write a program for displaying the amount payable by a person for the 
tickets purchased by him. */

#include<stdio.h>

int main()
{
	int tickets, price, amount;
	printf("Enter no. of tickets purchased : ");
	scanf("%d", &tickets);
	
	if(tickets<10) {
		price = 5;
	}
	else {
		price = 4;
	}
	
	amount = tickets*price;
	printf("No. of tickets : %d\n", tickets);
	printf("Price per tickets: %d\n", price);
	printf("Total amount payable: %d\n", amount);
	
	return 0;
}
