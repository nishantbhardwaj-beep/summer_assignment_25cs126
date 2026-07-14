#include <stdio.h>

int main() {
    double x, result = 1;
    int n;

    printf("Enter x and n: ");
    scanf("%lf %d", &x, &n);

    int power = n;

    if (power < 0) {
        power = -power;
    }

    while (power > 0) {
        if (power % 2 == 1) {
            result *= x;
        }

        x *= x;
        power /= 2;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    printf("Answer = %lf\n", result);

    return 0;
}