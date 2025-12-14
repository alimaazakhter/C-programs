// Q1.Write a program to print numbers from 10 to 20. Use While loop 

#include <stdio.h>

int main() {
    int i = 10; // starting number

    while(i <= 20) {  // condition: jab tak i 20 se chhota ya equal hai
        printf("%d\n", i); // print current number
        i++; // increment i by 1
    }

    return 0;
}

