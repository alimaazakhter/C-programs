/* 4. Write a program to input an amount to gamble along with numbers selected on three wheels 
rotated by users. If all the 3 numbers are same, then the amount will be 80 times. If any 2 numbers 
are same, then the amount is doubled. In all other cases, the amount will be forefeited.*/

#include<stdio.h>
int main()
{
	int w1, w2, w3, amt;
	printf("\n Enter amt: ");
	scanf("%d", &amt);
	printf("%d %d %d", &w1, &w2, &w3);
	
	if(w1==w2 && w2==w3)
	{
		amt = amt*2;
	}
	else {
		amt = 0;
	}
	printf("\n Your current amount is %d", amt);
	return 0;
}
