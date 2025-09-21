/*Write a program to input Hrs,mins, seconds and convert it into total no. of seconds*/

#include<stdio.h>

int main() {
	int hours, minutes, seconds, total_seconds;
	
	printf("\n Enter hours: ");
	scanf("%d", &hours);
	
	printf("\n Enter minutes: ");
	scanf("%d", &minutes);
	
	printf("\n Enter Seconds : ");
	scanf("%d", &seconds);
	
	total_seconds = (hours*3600) + (minutes*60)+seconds;
	
	printf("Total seconds = %d\n", total_seconds);
	return 0;
	
}
