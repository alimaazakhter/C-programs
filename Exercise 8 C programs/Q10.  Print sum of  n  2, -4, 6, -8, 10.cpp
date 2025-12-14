//10. Write a program to print sum of n terms of the series -
//	2, -4, 6, -8, 10, -12, ...

#include <stdio.h>
int main() {
    int n, i, term = 2, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d ", term);
        sum += term;
        if(term > 0)
            term = -(term + 2);
        else
            term = -(term - 2);
    }
    printf("\nSum = %d", sum);
    return 0;
}

