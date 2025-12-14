//Q9. Write a program to print sum of n terms of the series -
//	-42,-35,-28,-21,...

#include <stdio.h>
int main() {
    int n, i, term = -42, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d ", term);
        sum += term;
        term += 7;
    }
    printf("\nSum = %d", sum);
    return 0;
}

