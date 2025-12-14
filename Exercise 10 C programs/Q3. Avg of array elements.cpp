#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;
    printf("Average of array elements = %.2f\n", avg);
    return 0;
}

