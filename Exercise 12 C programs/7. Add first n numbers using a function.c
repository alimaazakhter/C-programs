#include <stdio.h>

int sum(int n)
{
    int total = 0;

    for(int i = 1; i <= n; i++)
    {
        total = total + i;
    }

    return total;
}

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d numbers = %d", n, sum(n));

    return 0;
}
