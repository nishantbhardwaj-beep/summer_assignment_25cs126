#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}