#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("===== NBA 2026 Quiz =====\n\n");

    // Question 1
    printf("1. Which team won the 2026 NBA Championship?\n");
    printf("1. Oklahoma City Thunder\n");
    printf("2. San Antonio Spurs\n");
    printf("3. New York Knicks\n");
    printf("4. Boston Celtics\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 2
    printf("\n2. Who won the 2026 NBA Finals MVP Award?\n");
    printf("1. Victor Wembanyama\n");
    printf("2. Jalen Brunson\n");
    printf("3. Nikola Jokic\n");
    printf("4. Stephen Curry\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 3
    printf("\n3. Which team did the Knicks defeat in the 2026 NBA Finals?\n");
    printf("1. Denver Nuggets\n");
    printf("2. Indiana Pacers\n");
    printf("3. San Antonio Spurs\n");
    printf("4. Boston Celtics\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 4
    printf("\n4. Which player was the leading scorer in the 2026 NBA Finals series?\n");
    printf("1. Jalen Brunson\n");
    printf("2. Victor Wembanyama\n");
    printf("3. Anthony Edwards\n");
    printf("4. Shai Gilgeous-Alexander\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n=============================\n");
    printf("Your Final Score: %d/4\n", score);

    if (score == 4)
        printf("MVP! You're a true NBA fan.\n");
    else if (score >= 2)
        printf("Nice! You know your basketball.\n");
    else
        printf("Time to watch more NBA games!\n");

    return 0;
}