#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    printf("Enter your first name: ");
    if (scanf("%49s", name) != 1) return 1;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        fprintf(stderr, "Enter a valid non-negative age.\n");
        return 1;
    }

    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}
