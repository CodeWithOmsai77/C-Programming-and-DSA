#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int temporary;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    temporary = a;
    a = b;
    b = temporary;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
