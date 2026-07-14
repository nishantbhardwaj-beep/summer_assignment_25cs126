#include <stdio.h>

int main() {
    int n;

    printf("Enter the total expected elements (including missing): ");
    scanf("%d", &n);

    int arr[n - 1];
    int currentSum = 0;

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        currentSum += arr[i];
    }

    int totalSum = (n * (n + 1)) / 2;
    int missingNumber = totalSum - currentSum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}