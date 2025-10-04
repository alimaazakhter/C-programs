// Q3. Write a program to input three numbers and find the maximum of these numbers. 

#include<stdio.h>

int main() 
{
	int a,b,c;
	printf("Enter ant three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b) 
	{
		if(a>c)
		{
		printf("Maximum %d\n ", a);
	    }
	    else
	    {
	    	printf("Maximum %d\n", c);
		}
	}
	else 
	{
		if(b>c)
		{
			printf("Maximum %d\n", b);
		}
		else{
			printf("Maximum %d\n", c);
		}
	}
	return 0;
}
