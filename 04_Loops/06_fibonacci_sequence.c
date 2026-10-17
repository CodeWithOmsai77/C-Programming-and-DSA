#include <stdio.h>

int main(void)
{
    unsigned int terms;
    unsigned int i;
    unsigned long long first = 0;
    unsigned long long second = 1;

    printf("Number of terms (1 to 94): ");
    if (scanf("%u", &terms) != 1 || terms < 1 || terms > 94) return 1;

    for (i = 0; i < terms; i++) {
        printf("%llu", first);
        if (i + 1 < terms) putchar(' ');
        if (i + 1 < terms) {
            unsigned long long next = first + second;
            first = second;
            second = next;
        }
    }
    putchar('\n');
    return 0;
}
