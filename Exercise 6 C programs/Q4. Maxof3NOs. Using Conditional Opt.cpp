//Q4. Write a program to find maximum of three numbers using conditional operator.

#include<stdio.h>
int main()
{
	int n1, n2, n3, max;
	printf("\n Enter any three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	max = (n1>n2?(n1>n3? n1 : n3): (n2>n3?n2:n3));
	
	printf("%d is large number", max);
	return 0;
}
