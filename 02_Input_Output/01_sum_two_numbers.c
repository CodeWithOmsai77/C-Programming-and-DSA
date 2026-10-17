#include <stdio.h>

int main(void)
{
    double a;
    double b;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        fprintf(stderr, "Please enter two valid numbers.\n");
        return 1;
    }

    printf("Sum = %.2f\n", a + b);
    return 0;
}
