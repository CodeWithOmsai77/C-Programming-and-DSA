#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void)
{
    int a;
    int b;

    printf("Enter two non-negative integers (not both zero): ");
    if (scanf("%d %d", &a, &b) != 2 || a < 0 || b < 0 ||
        (a == 0 && b == 0)) return 1;

    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
