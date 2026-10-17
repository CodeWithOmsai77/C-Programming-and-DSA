#include <stdio.h>

int main(void)
{
    const char *questions[] = {
        "Which function is the usual entry point in C?",
        "Which format specifier prints an int?",
        "Which operator gives the remainder of integer division?",
        "Which header declares printf?",
        "Which loop checks its condition before each iteration?"
    };
    const char *options[][4] = {
        {"1) start()", "2) main()", "3) run()", "4) begin()"},
        {"1) %f", "2) %c", "3) %d", "4) %s"},
        {"1) /", "2) *", "3) %", "4) +"},
        {"1) <stdlib.h>", "2) <stdio.h>", "3) <string.h>", "4) <time.h>"},
        {"1) while", "2) do-while only", "3) switch", "4) typedef"}
    };
    const int answers[] = {2, 3, 3, 2, 1};
    int score = 0;
    int i;

    puts("=== C Basics Quiz ===");
    for (i = 0; i < 5; i++) {
        int answer;
        int j;

        printf("\nQ%d. %s\n", i + 1, questions[i]);
        for (j = 0; j < 4; j++) puts(options[i][j]);
        printf("Answer (1-4): ");
        if (scanf("%d", &answer) != 1) return 1;

        if (answer == answers[i]) {
            puts("Correct!");
            score++;
        } else {
            printf("Correct option: %d\n", answers[i]);
        }
    }

    printf("\nFinal score: %d/5\n", score);
    return 0;
}
