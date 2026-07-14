//program to print prime numbers in a range
#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        if (num <= 1)
            continue;

        int prime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", num);
    }

    return 0;
}