//Q8. Write a program to print sum of n terms of the series -
//	1,3,7,15,31,...

#include <stdio.h>
int main() {
    int n, i, term = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("\n %d ", term);
        sum += term;
        term = term * 2 + 1;
    }
    printf("\nSum = %d", sum);
    return 0;
}

