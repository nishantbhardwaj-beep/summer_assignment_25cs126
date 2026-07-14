#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}