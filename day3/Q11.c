//program to print GCD of two numbers
#include <stdio.h>

int main() {
    int m, n, r;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("GCD = %d", m);

    return 0;
}