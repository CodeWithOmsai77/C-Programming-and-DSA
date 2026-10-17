#include <stdio.h>

int main(void)
{
    int values[100];
    int n;
    int target;
    int found = -1;
    int i;

    printf("Number of elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;

    printf("Target: ");
    if (scanf("%d", &target) != 1) return 1;

    for (i = 0; i < n; i++) {
        if (values[i] == target) {
            found = i;
            break;
        }
    }

    if (found >= 0) printf("Found at index %d\n", found);
    else puts("Not found");
    return 0;
}
