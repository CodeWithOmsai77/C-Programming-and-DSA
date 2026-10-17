#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int is_prime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number < 2) {
        is_prime = 0;
    } else {
        for (i = 2; i <= number / i; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    puts(is_prime ? "Prime" : "Not prime");
    return 0;
}
