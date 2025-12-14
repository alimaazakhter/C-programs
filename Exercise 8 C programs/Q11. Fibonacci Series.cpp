//11. Write a program to print n terms of fibonacci series -
//	1,1,2,3,5,8,13,...

#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}

