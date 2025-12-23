#include<stdio.h>

int a = 5, b = 10;

void swap_value(int x, int y);
void swap_ref();

int main()
{
    printf("Before swapping: a=%d b=%d\n", a, b);

    swap_value(a, b);
    printf("After Call by Value: a=%d b=%d\n", a, b);

    swap_ref();
    printf("After Call by Reference: a=%d b=%d\n", a, b);

    return 0;
}

void swap_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_ref()
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

