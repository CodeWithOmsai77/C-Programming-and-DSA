#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number % 2 == 0) puts("Even");
    else puts("Odd");
    return 0;
}
