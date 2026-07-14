//program to find LCM of two numbers
#include <stdio.h>

int main() {
    int m, n, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    max = (m > n) ? m : n;

    while (1) {
        if (max % m == 0 && max % n == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}