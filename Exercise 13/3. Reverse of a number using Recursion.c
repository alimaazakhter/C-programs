#include <stdio.h>

int reverse(int num, int rev)
{
    if (num == 0)
        return rev;
    else
        return reverse(num / 10, rev * 10 + num % 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse = %d", reverse(num, 0));

    return 0;
}
