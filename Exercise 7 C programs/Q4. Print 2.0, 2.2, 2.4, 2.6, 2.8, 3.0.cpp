/* Q4. Write a program to print the following
	2.0	2.2	2.4	2.6	2.8	3.0 */
	
#include <stdio.h>

int main() {
    float num = 2.0; // starting number

    while(num < 3.1) { // condition
        printf("%.1f\t", num); // print number with 1 decimal
        num += 0.2; // increment by 0.2
    }

    return 0;
}
	
