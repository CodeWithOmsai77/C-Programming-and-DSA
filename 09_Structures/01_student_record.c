#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main(void)
{
    struct Student student;

    printf("Enter first name, roll number, and marks: ");
    if (scanf("%49s %d %f", student.name,
              &student.roll_number, &student.marks) != 3) return 1;

    printf("\nName: %s\nRoll: %d\nMarks: %.2f\n",
           student.name, student.roll_number, student.marks);
    return 0;
}
