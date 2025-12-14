#include <stdio.h>

int main() {
    int i, j, row, col, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter elements of the array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; // add element to sum
        }
    }

    printf("Sum of 2D array elements = %d\n", sum);
    return 0;
}

