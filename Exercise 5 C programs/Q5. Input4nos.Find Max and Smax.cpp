/* Q5. Write a program to input four numbers and find the maximum and second maximum of these 
numbers. */

#include<stdio.h>

int main()
{
	int n1, n2, n3, n4, max, smax;
	printf("Enter any Four numbers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if(n1>n2)
	{
		max = n1;
		smax = n2;
	}
	else {
		max = n2;
		smax = n1;
	}
	if(n3>max)
	{
		smax = max;
		max = n3;
	}
	else
	{
		if(n3>smax)
		{
			smax = n3;
		}
	}
	if(n4>max)
	{
		smax = max;
		max = n4;
	}
	else {
		if (n4>smax)
		{
			smax = n4;
		}
	}
	printf("%d is max & %d is smax", max, smax);
	return 0;
}
