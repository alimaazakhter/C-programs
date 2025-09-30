/* Q2. Write a program to input an amount in terms of rupees. The program should output the number of 
notes of denomination 2000, 500, 100, 50, 20, 10, 5, 2, and 1 this amount will consist of. 
The program should give the combination with minimum number of notes. */

#include<stdio.h>

int main() {
	
	int amount, notes, i;
	int denomination[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
	
	int n = sizeof(denomination)/sizeof (denomination[0]);
	
	printf("Enter the Amount in rupees : ");
	scanf("%d", &amount); 
	
	printf("Breakdown: \n");
	for(i=0; i<n; i++) {
		
		notes=amount/denomination[i];
		if (notes>0)
		{
			printf("%d * %d", denomination[i], notes);
			amount = amount % denomination[i];
		}
	}
	return 0;
}
