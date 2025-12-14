// Q3. Write a program to print characters from D to X. Use while loop

#include <stdio.h>

int main() {
    char ch = 'D'; // starting character

    while(ch <= 'X') {  // condition: jab tak ch 'X' se chhota ya equal hai
        printf("%c\n", ch); // print current character
        ch++; // next character
    }

    return 0;
}

