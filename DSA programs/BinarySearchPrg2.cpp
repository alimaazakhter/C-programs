#include <stdio.h>

int main() {
    int a[50], n, i, search;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements (MUST be sorted)
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Display array
    printf("\nElements of array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == search) {
            printf("Element found at %d position\n", mid + 1);
            found = 1;
            break;
        } 
        else if (a[mid] < search) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}

