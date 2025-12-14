// Q10. Print all characters between G and Y

#include <stdio.h>

int main() {
    char ch;

    for(ch = 'G'; ch <= 'Y'; ch++) { // ASCII sequence
        printf("%c\t", ch);
    }

    return 0;
}

