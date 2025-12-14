#include <stdio.h>

int main() {
    int n = 3; // half-height of pattern
    int i, j;

    // Upper part
    for(i = 1; i <= n; i++) {
        // print spaces
        for(j = 1; j <= n - i; j++) {
            printf("  "); // 2 spaces for proper alignment
        }
        // print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // print decreasing numbers
        for(j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower part
    for(i = n-1; i >= 1; i--) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // decreasing numbers
        for(j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

