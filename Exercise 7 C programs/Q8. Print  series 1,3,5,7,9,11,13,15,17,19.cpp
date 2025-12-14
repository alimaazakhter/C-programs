// Q8. Print the series 1,3,5,7,9,11,13,15,17,19. Use For loop

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 19; i += 2) { // start 1, increment by 2
        printf("%d\t", i);
    }

    return 0;
}

