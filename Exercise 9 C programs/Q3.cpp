////a
//
//#include <stdio.h>
//
//int main() {
//    int i, j, n;
//    char ch = 'A';
//
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//
//    for(i = n; i >= 1; i--) {     // rows decreasing
//        for(j = 1; j <= i; j++) { // print same letter i times
//            printf("%c", ch);
//        }
//        printf("\n");
//        ch++;  // next letter
//    }
//
//    return 0;
//}

//b

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {       // rows decreasing
        for(j = 0; j < i; j++) {    // letters from 'A'
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}


