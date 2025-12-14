/*Q6. Write a program to print n terms of the series -
	1,2,4,8,16,... */
	
#include <stdio.h>
int main() {
    int n, i, term = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("\n %d ", term);
        term *= 2;
    }
    return 0;
}

