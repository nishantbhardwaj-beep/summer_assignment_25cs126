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

    int intersectArr[n1 < n2 ? n1 : n2];
    int iSize = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int duplicate = 0;
                for (int k = 0; k < iSize; k++) {
                    if (arr1[i] == intersectArr[k]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    intersectArr[iSize] = arr1[i];
                    iSize++;
                }
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (int i = 0; i < iSize; i++) {
        printf("%d ", intersectArr[i]);
    }
    printf("\n");

    return 0;
}