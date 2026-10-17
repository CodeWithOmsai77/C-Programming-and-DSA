#include <stdio.h>

int main(void)
{
    int values[100];
    int n;
    int i;
    int j;

    printf("Number of elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++) printf("%d ", values[i]);
    putchar('\n');
    return 0;
}
