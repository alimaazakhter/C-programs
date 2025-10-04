/*Q2. Write a program to input subjects of 3 marks (out of 100) and print the grade as per the 
percentage.
 
	Percentage		Grade
	85-100			S
	75-84			A
	60-74			B
	50-59			C
	0-49			F
*/

#include <stdio.h>

int main() 
{
    int m1, m2, m3;
    float total, percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = (total / 300.0) * 100; // Correct percentage calculation

    if (percentage >= 85)
        printf("Percentage = %.2f\nGrade = A\n", percentage);
    else if (percentage >= 75)
        printf("Percentage = %.2f\nGrade = B\n", percentage);
    else if (percentage >= 60)
        printf("Percentage = %.2f\nGrade = C\n", percentage);
    else if (percentage >= 50)
        printf("Percentage = %.2f\nGrade = D\n", percentage);
    else
        printf("Percentage = %.2f\nGrade = F\n", percentage);

    return 0;
}

