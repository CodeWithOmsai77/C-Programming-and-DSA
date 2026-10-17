#include <stdio.h>

int main(void)
{
    unsigned int n;
    unsigned int i;
    unsigned long long factorial = 1;

    printf("Enter n (0 to 20): ");
    if (scanf("%u", &n) != 1 || n > 20) return 1;

    for (i = 2; i <= n; i++) factorial *= i;
    printf("%u! = %llu\n", n, factorial);
    return 0;
}
