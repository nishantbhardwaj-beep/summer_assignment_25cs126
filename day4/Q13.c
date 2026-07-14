#include <stdio.h>

int main() {
    int n, first = 0, second = 1, fibo;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
        }
        else if (i == 2) {
            printf("%d ", second);
        }
        else {
            fibo = first + second;
            printf("%d ", fibo);
            first = second;
            second = fibo;
        }
    }

    return 0;
}