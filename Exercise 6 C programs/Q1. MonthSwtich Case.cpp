// Q1. Write a program to input a number and print its corresponding month name. Using Switch case.

#include<stdio.h>

int main()
{
    int num1;
    printf("Enter any number between 1-12: ");
    scanf("%d", &num1);

    switch(num1)
    {
        case 1:
            printf("\nJanuary");
            break;

        case 2:
            printf("\nFebruary");
            break;

        case 3:
            printf("\nMarch");
            break;

        case 4:
            printf("\nApril");
            break;

        case 5:
            printf("\nMay");
            break;

        case 6:
            printf("\nJune");
            break;

        case 7:
            printf("\nJuly");
            break;

        case 8:
            printf("\nAugust");
            break;

        case 9:
            printf("\nSeptember");
            break;

        case 10:
            printf("\nOctober");
            break;

        case 11:
            printf("\nNovember");
            break;

        case 12:
            printf("\nDecember");
            break;

        default:
            printf("\nInvalid input");
    }

    return 0;
}

