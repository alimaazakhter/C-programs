#include <stdio.h>

int main() {
    int i, j, row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    // Input array elements
    printf("Enter elements of the array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print array
    printf("2D Array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

