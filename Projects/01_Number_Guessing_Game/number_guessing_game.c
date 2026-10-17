#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret;
    int guess;
    int attempt;

    srand((unsigned int)time(NULL));
    secret = rand() % 100 + 1;

    puts("=== Number Guessing Game ===");
    puts("Guess a number from 1 to 100. You have 7 attempts.");

    for (attempt = 1; attempt <= 7; attempt++) {
        printf("Attempt %d/7: ", attempt);
        if (scanf("%d", &guess) != 1) {
            fprintf(stderr, "Please enter an integer.\n");
            return 1;
        }

        if (guess == secret) {
            printf("Correct! You won in %d attempt(s).\n", attempt);
            return 0;
        }
        puts(guess < secret ? "Too low." : "Too high.");
    }

    printf("Out of attempts. The number was %d.\n", secret);
    return 0;
}
