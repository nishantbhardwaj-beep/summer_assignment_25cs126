#include <stdio.h>

void printFibonacci(int terms) {
    if (terms <= 0) return;

    int t1 = 0, t2 = 1;

    for (int i = 0; i < terms; i++) {
        printf("%d ", t1);
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printFibonacci(n);

    return 0;
}