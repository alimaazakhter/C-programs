#include <stdio.h>

float multiply(int a, float b)
{
    return a * b;
}

int main()
{
    int x;
    float y, result;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter a float value: ");
    scanf("%f", &y);

    result = multiply(x, y);

    printf("Multiplication = %.2f", result);

    return 0;
}
