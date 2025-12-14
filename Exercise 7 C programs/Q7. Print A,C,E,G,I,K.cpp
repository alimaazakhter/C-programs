// Q7. Print the series A,C,E,G,I,K. Use For loop

#include <stdio.h>

int main() {
    char ch;

    for(ch = 'A'; ch <= 'K'; ch += 2) { // start at 'A', increment by 2
        printf("%c\t", ch);
    }

    return 0;
}

