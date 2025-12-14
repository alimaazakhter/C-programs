//Q12. Write a program to print n terms of modified fibonacci series -
//	1,1,1,3,5,9,17,31,...

#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c = 1, d;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d %d ", a, b, c);
    for(i = 4; i <= n; i++) {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}

