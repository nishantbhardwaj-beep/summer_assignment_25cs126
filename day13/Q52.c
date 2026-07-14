#include <stdio.h>

int main() {
    int n;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements count: %d\n", evenCount);
    printf("Odd elements count: %d\n", oddCount);

    return 0;
}