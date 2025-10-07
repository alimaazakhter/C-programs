#include <stdio.h>

 int reversedNum = 0;

void rev_Number(int n) {
    if (n == 0) {
        return;
    }
    
    int remainder = n % 10;
    reversedNum = reversedNum * 10 + remainder;

    rev_Number(n / 10);
}

int main() {
    int n;

    printf("Enter an number here: ");
    scanf("%d", &n);

    rev_Number(n);

    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
