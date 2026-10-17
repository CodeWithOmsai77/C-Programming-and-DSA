#include <stdio.h>

#define STUDENT_COUNT 3

struct Student {
    char name[40];
    float marks;
};

int main(void)
{
    struct Student students[STUDENT_COUNT];
    int i;

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Student %d (first name and marks): ", i + 1);
        if (scanf("%39s %f", students[i].name, &students[i].marks) != 2)
            return 1;
    }

    puts("\nStudent records:");
    for (i = 0; i < STUDENT_COUNT; i++)
        printf("%s: %.2f\n", students[i].name, students[i].marks);
    return 0;
}
