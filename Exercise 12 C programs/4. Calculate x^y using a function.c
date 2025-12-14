#include <stdio.h>

int power(int x, int y)
{
    int result = 1;

    for(int i = 1; i <= y; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Result = %d", power(x, y));

    return 0;
}
