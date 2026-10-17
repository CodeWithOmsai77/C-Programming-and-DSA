#include <stdio.h>

int main(void)
{
    double a;
    double b;
    char operator;

    printf("Enter an expression (example: 8 * 3): ");
    if (scanf("%lf %c %lf", &a, &operator, &b) != 3) return 1;

    switch (operator) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b == 0.0) {
                fprintf(stderr, "Cannot divide by zero.\n");
                return 1;
            }
            printf("Result = %.2f\n", a / b);
            break;
        default:
            fprintf(stderr, "Use +, -, *, or /.\n");
            return 1;
    }
    return 0;
}
