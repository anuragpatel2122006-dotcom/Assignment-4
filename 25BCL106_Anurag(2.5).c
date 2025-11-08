#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[50], n, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMaxMin(arr, n, &max, &min);

    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);

    return 0;
}