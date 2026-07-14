#include <stdio.h>

int main() {
    int n, target;
    int foundIndex = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index: %d\n", foundIndex);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}