#include <stdio.h>

int main() {
    int i, j, row, col, max;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter elements of the array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Maximum element in 2D array = %d\n", max);
    return 0;
}

