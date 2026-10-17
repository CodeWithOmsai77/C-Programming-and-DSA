#include <stdio.h>

int main(void)
{
    int value = 42;
    int *pointer = &value;

    printf("Value: %d\n", value);
    printf("Address: %p\n", (void *)&value);
    printf("Value through pointer: %d\n", *pointer);
    return 0;
}
