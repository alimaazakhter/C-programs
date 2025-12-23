#include<stdio.h>

int main()
{
    int a, b, temp;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
	
	printf("\n Before swapping: ");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
	
    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}

