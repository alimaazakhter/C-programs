/*Q1. Write a flowchart program to input temperature in Fahrenheit and output the corresponding temperature in centigrade. The formula for conversion is as 
follows. C = 5/9*(F – 32) */

#include<stdio.h>

int main(){
	
	float f,c;
	printf("Enter the temperature in Fabrenheit : ");
	scanf("%f", &f);
	
	c = (5.0/9.0) * (f-32);
	printf("Temperature in Celcius = %.2f\n ", c);
	
	return 0;
}

