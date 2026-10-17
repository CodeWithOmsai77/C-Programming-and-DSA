#include <stdio.h>

int main(void)
{
    int values[100];
    int n;
    int target;
    int low = 0;
    int high;
    int found = -1;
    int i;

    printf("Number of sorted elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    printf("Enter integers in ascending order: ");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) return 1;
        if (i > 0 && values[i] < values[i - 1]) {
            fprintf(stderr, "Array is not sorted.\n");
            return 1;
        }
    }

    printf("Target: ");
    if (scanf("%d", &target) != 1) return 1;

    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (values[mid] == target) {
            found = mid;
            break;
        } else if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found >= 0) printf("Found at index %d\n", found);
    else puts("Not found");
    return 0;
}
