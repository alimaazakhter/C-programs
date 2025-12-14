/* Q6. Write a program to print the following
	E	H	K	N	Q */
	
#include <stdio.h>

int main() {
    char ch = 'E'; // starting character

    while(ch <= 'Q') {
        printf("%c\t", ch); // print current character
        ch += 3; // increment by 3 in ASCII to get next character
    }

    return 0;
}


