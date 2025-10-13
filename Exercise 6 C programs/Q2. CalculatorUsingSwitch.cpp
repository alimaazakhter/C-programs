/* Q2. Write a program to input 2 numbers and perform arithmetic operation (+,-,*,/) as per the 
input chosen by user.*/

#include<stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);   // Notice space before %c to avoid input issue

    switch(op)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid operation chosen!");
    }

    return 0;
}

