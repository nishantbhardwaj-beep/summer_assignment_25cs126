#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too High! Try again.\n");
        }
        else if (guess < secret) {
            printf("Too Low! Try again.\n");
        }
        else {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("You guessed it in %d attempt(s).\n", attempts);
        }

    } while (guess != secret);

    return 0;
}