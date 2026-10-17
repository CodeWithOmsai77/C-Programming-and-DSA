#include <stdio.h>

int main(void)
{
    int values[100];
    int n;
    int minimum;
    int maximum;
    int i;

    printf("Number of elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) return 1;
    }

    minimum = maximum = values[0];
    for (i = 1; i < n; i++) {
        if (values[i] < minimum) minimum = values[i];
        if (values[i] > maximum) maximum = values[i];
    }

    printf("Minimum = %d\nMaximum = %d\n", minimum, maximum);
    return 0;
}
