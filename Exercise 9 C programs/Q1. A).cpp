//1. Write a program to print following patterns: 
//a)

//#include <stdio.h>
//
//int main() {
//    int i, j, n;
//
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++) {
//        for(j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");  // next line
//    }
//
//    return 0;
//}

//b
//#include <stdio.h>
//
//int main() {
//    int i, j, n;
//
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++) {
//        // print spaces
//        for(j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        // print stars
//        for(j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//c
//#include <stdio.h>
//
//int main() {
//    int i, j, n;
//
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//
//    for(i = n; i >= 1; i--) {
//        for(j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//D

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows (for half diamond): ");
    scanf("%d", &n);

    // Upper part of diamond
    for(i = 1; i <= n; i++) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for(i = n-1; i >= 1; i--) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

