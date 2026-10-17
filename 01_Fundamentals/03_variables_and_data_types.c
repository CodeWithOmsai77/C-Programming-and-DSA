#include <stdio.h>

int main(void)
{
    int age = 20;
    float temperature = 27.5f;
    double distance = 1234.567;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Distance: %.3f\n", distance);
    printf("Grade: %c\n", grade);
    return 0;
}
