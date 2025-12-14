#include <stdio.h>

float subtract(int a, float b)
{
    return a - b;
}

int main()
{
    int x;
    float y, result;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter a float value: ");
    scanf("%f", &y);

    result = subtract(x, y);

    printf("Subtraction = %.2f", result);

    return 0;
}
