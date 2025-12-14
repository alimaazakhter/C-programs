#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
    }

    printf("Positive count = %d\nNegative count = %d\n", pos, neg);
    return 0;
}

