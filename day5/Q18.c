// Program to check whether a number is a Strong Number

#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number.", num);
    } else {
        printf("%d is not a Strong Number.", num);
    }

    return 0;
}