#include <stdio.h>

long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        long long result = findFactorial(num);
        printf("Factorial: %lld\n", result);
    }

    return 0;
}