// Q9. Print all even numbers between 150 to 100

#include <stdio.h>

int main() {
    int i;

    for(i = 150; i >= 100; i--) { // reverse loop
        if(i % 2 == 0) {           // check even
            printf("%d\t", i);
        }
    }

    return 0;
}

