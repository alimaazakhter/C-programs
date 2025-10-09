//Q3. Write a program to input three numbers and find the maximum of these numbers. Use 
//logical operators.

#include<stdio.h>
int main() 
{
	int m1, m2, m3;
	printf("\n Enter any 3 numbers: ");
	scanf("%d %d %d", &m1, &m2, &m3);
	
	if(m1>m2 && m1>m3) {
		printf("%d is max", m1);
	}
	else if(m2>m1 && m2>m3) 
	{
		printf("%d is max", m2);
	}
	else{
		printf("%d is max", m3);
	}
	
	return 0;
}
