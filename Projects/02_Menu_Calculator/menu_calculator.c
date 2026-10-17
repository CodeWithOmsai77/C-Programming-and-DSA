#include <stdio.h>

int main(void)
{
    int choice;
    double a;
    double b;

    do {
        printf("\n=== Menu Calculator ===\n");
        printf("1.Add  2.Subtract  3.Multiply  4.Divide  0.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 0) break;
        if (choice < 1 || choice > 4) {
            puts("Choose a valid option.");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) return 1;

        switch (choice) {
            case 1: printf("Result = %.2f\n", a + b); break;
            case 2: printf("Result = %.2f\n", a - b); break;
            case 3: printf("Result = %.2f\n", a * b); break;
            case 4:
                if (b == 0.0) puts("Cannot divide by zero.");
                else printf("Result = %.2f\n", a / b);
                break;
        }
    } while (choice != 0);

    puts("Goodbye!");
    return 0;
}
