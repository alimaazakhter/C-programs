#include <stdio.h>

int main() {
    int i, j, row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter elements of the array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Average of each row
    for(i = 0; i < row; i++) {
        int sum = 0;
        for(j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        printf("Average of row %d = %.2f\n", i+1, (float)sum/col);
    }

    return 0;
}

