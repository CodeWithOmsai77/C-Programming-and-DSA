#include <stdio.h>

int main(void)
{
    const double PI = 3.141592653589793;
    double radius;
    double principal;
    double rate;
    double years;

    printf("Enter circle radius: ");
    if (scanf("%lf", &radius) != 1 || radius < 0.0) return 1;
    printf("Circle area = %.3f\n", PI * radius * radius);

    printf("Enter principal, annual rate (%%), and years: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &years) != 3 ||
        principal < 0.0 || rate < 0.0 || years < 0.0) return 1;

    printf("Simple interest = %.2f\n", principal * rate * years / 100.0);
    return 0;
}
