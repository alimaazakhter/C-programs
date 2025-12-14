/* Q5. Write a program to print n terms of the series -
	1,3,5,7,9,...*/
	
	#include <stdio.h>
int main() {
    int n, i, term = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("/n %d ", term);
        term += 2;
    }
    return 0;
}

