/* Q3. A student is awarded honors if he obtains 85% or more in aggregate marks. 
There are three subjects and marks are awarded out of 100 in each subject. 
The program should display an appropriate massage. */

#include<stdio.h>

int main() 
{
	int m1, m2, m3;
	float total, percentage;
	
	printf("Enter marks of 3 subjects : ");
	scanf("%d %d %d", &m1, &m2, &m3);
	
	total = m1+m2+m3;
	percentage = (total/300.0) * 100;
	
	printf("Total = %2f\n", total);
	printf("percentage = %2f\n", percentage);
	
	if(percentage >= 85)
	{
		printf("Honors Awarded\n");
	}
	else 
	{
		printf("No Honors \n");
	}
	return 0;
}
