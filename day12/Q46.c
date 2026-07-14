#include <stdio.h>

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int count = 0;

    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= digit;
        }
        
        sum += p;
        temp /= 10;
    }

    if (sum == original) {
        return 1;
    }
    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}