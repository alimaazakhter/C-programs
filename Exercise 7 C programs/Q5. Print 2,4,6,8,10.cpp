/*Q5. Write a program to print the following
	2	4	6	8	10 */
	
#include <stdio.h>

int main() {
    int num = 2; // starting number

    while(num <= 10) { // condition
        printf("%d\t", num); // print current number
        num += 2; // increment by 2 to get next even number
    }

    return 0;
}
	
	
	
