/* Q4. Write a program to input total number of days and convert them into years, months, 
weeks and days. */

#include<stdio.h>

int main(){
	int total_days, years, months, weeks, days;
	
	printf("Enter total no. of days : ");
	scanf("%d", &total_days);
	
	years= total_days / 365;
	total_days %= 365;
	months = total_days/30;
	total_days %= 30;
	weeks = total_days / 7;
	days = total_days % 7;
	
	printf("%d years, %d months, %d weeks, %d days \n", years, months,weeks, days);
	
	return 0;
	
}

