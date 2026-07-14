#include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = findSum(num1, num2);
    printf("Sum: %d\n", sum);

    return 0;
}