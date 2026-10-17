#include <stdio.h>

#define MAX_EXPENSES 100

struct Expense {
    char description[40];
    double amount;
};

int main(void)
{
    struct Expense expenses[MAX_EXPENSES];
    int count;
    int i;
    int largest_index = 0;
    double total = 0.0;

    printf("Number of expenses (1 to %d): ", MAX_EXPENSES);
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_EXPENSES) return 1;

    for (i = 0; i < count; i++) {
        printf("Expense %d label (one word): ", i + 1);
        if (scanf("%39s", expenses[i].description) != 1) return 1;

        printf("Amount: ");
        if (scanf("%lf", &expenses[i].amount) != 1 ||
            expenses[i].amount < 0.0) {
            fprintf(stderr, "Amount must be non-negative.\n");
            return 1;
        }

        total += expenses[i].amount;
        if (i == 0 || expenses[i].amount > expenses[largest_index].amount)
            largest_index = i;
    }

    puts("\n--- Expense Summary ---");
    for (i = 0; i < count; i++)
        printf("%-18s %10.2f\n", expenses[i].description, expenses[i].amount);

    printf("Total: %.2f\nAverage: %.2f\nLargest: %s (%.2f)\n",
           total, total / count, expenses[largest_index].description,
           expenses[largest_index].amount);
    return 0;
}
