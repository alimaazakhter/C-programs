/* Q3. Demonstrate the use of break and continue by using for loop to print values
	1,2,3	(Use break for 5 times iteration)
	1,2,4,5 (Use continue for third iteration) */
	
#include <stdio.h>
int main() {
    int i;
    // break example
    for(i = 1; i <= 10; i++) {
        if(i == 6) break;
        printf("%d ", i);
    }
    printf("\n");
    // continue example
    for(i = 1; i <= 5; i++) {
        if(i == 3) continue;
        printf("%d ", i);
    }
    return 0;
}
	
