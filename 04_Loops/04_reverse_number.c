#include <stdio.h>

int main(void)
{
    long long number;
    long long remaining;
    long long reversed = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &number) != 1 || number < 0) return 1;

    remaining = number;
    while (remaining > 0) {
        reversed = reversed * 10 + remaining % 10;
        remaining /= 10;
    }

    printf("Reversed digits = %lld\n", reversed);
    return 0;
}
