//Q2. Write a program to print numbers from 15 to 1. Use while loop

#include <stdio.h>

int main() {
    int i = 15; // starting number

    while(i >= 1) {  // condition: jab tak i 1 se bada ya equal hai
        printf("%d\n", i); // print current number
        i--; // decrement i by 1
    }

    return 0;
}

