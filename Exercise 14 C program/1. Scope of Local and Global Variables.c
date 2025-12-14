#include <stdio.h>

int x = 10;   // Global variable

void show()
{
    int x = 20;   // Local variable
    printf("Inside function, x = %d\n", x);
}

int main()
{
    printf("In main, x = %d\n", x);
    show();
    printf("Again in main, x = %d\n", x);

    return 0;
}
