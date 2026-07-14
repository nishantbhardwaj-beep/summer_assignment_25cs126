#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2];
    int uSize = 0;

    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < uSize; j++) {
            if (arr1[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            unionArr[uSize] = arr1[i];
            uSize++;
        }
    }

    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        for (int j = 0; j < uSize; j++) {
            if (arr2[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            unionArr[uSize] = arr2[i];
            uSize++;
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < uSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}