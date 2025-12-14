//A)
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
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//B)
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
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//c)
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
//            printf("%d", i);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//d)
#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}



