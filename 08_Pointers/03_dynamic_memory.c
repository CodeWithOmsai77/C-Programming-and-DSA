#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t n;
    size_t i;
    int *values;
    long long sum = 0;

    printf("How many integers (1 to 1000)? ");
    if (scanf("%zu", &n) != 1 || n < 1 || n > 1000) return 1;

    values = malloc(n * sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %zu integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            free(values);
            return 1;
        }
        sum += values[i];
    }

    printf("Sum = %lld\n", sum);
    free(values);
    return 0;
}
