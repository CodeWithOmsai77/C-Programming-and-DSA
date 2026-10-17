#include <stdio.h>

int main(void)
{
    int n;
    int i;
    long long sum = 0;

    printf("Enter a non-negative n: ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    for (i = 1; i <= n; i++) sum += i;
    printf("Sum = %lld\n", sum);
    return 0;
}
