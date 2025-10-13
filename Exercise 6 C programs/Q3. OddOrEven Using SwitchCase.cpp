/* Q3. Write a program to input a number and check whether it is even or odd using switch case.*/

#include<stdio.h>

int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    switch (number % 2 == 0)
    {
        case 1:   // true condition (even)
            printf("%d is an Even number", number);
            break;

        case 0:   // false condition (odd)
            printf("%d is an Odd number", number);
            break;
    }

    return 0;
}

