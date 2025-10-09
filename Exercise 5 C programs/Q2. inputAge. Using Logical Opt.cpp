/* 2. Write a program to input age of a person and print appropriate message. Use logical operators 
	Age			Message
	70-100			Super Senior Citizen
	60-69			Senior Citizen
	40-59			Middle Aged
	18-39			Mature
	0-17			Kid 
*/

#include<stdio.h>

int main()
{
	int age;
	printf("\n Enter any age: ");
	scanf("%d", &age);
	
	if(age>=70 && age<= 100)
	{
		printf("Super Senior Citizen");
	}
	else if(age>=60 && age<=69)
	{
		printf("Senior Citizen");
	}
	else if(age>=40 && age<=59)
	{
		printf("Middle age");
	}
	else if(age>=18 && age<=39)
	{
		printf("Mature");
	}
	else
	{
		printf("Bhaacha hai bhai tu abhi");
	}
	return 0;
}
