// Program to find the nth Fibonacci term
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, fibo;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Nth Fibonacci term = %d", first);
    else if (n == 2)
        printf("Nth Fibonacci term = %d", second);
    else {
        for (int i = 3; i <= n; i++) {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("Nth Fibonacci term = %d", fibo);
    }

    return 0;
}