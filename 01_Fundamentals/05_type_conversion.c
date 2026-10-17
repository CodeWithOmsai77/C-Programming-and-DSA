#include <stdio.h>

int main(void)
{
    int numerator = 7;
    int denominator = 2;
    double result = (double)numerator / denominator;

    printf("Integer division: %d\n", numerator / denominator);
    printf("After conversion: %.2f\n", result);
    return 0;
}
