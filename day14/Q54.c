#include <stdio.h>

int main() {
    int n, target;
    int count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Frequency of %d is: %d\n", target, count);

    return 0;
}