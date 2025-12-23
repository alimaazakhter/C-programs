// Program to demonstrate static storage class
#include<stdio.h>

void show();

int main()
{
    show();
    show();
    show();
    return 0;
}

void show()
{
    static int a = 5;
    printf("A : %d\n", a);
    a++;
}

