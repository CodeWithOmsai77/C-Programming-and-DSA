#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 3

struct Student {
    char name[40];
    float marks[SUBJECTS];
};

char grade_from_average(float average)
{
    if (average >= 90.0f) return 'A';
    if (average >= 75.0f) return 'B';
    if (average >= 60.0f) return 'C';
    if (average >= 40.0f) return 'D';
    return 'F';
}

int main(void)
{
    struct Student students[STUDENTS];
    int i;
    int j;

    puts("=== Student Grade Manager ===");
    puts("Enter a first name and three subject marks (0 to 100).");

    for (i = 0; i < STUDENTS; i++) {
        printf("\nStudent %d name: ", i + 1);
        if (scanf("%39s", students[i].name) != 1) return 1;

        for (j = 0; j < SUBJECTS; j++) {
            printf("Subject %d marks: ", j + 1);
            if (scanf("%f", &students[i].marks[j]) != 1 ||
                students[i].marks[j] < 0.0f || students[i].marks[j] > 100.0f) {
                fprintf(stderr, "Marks must be between 0 and 100.\n");
                return 1;
            }
        }
    }

    puts("\n--- Results ---");
    for (i = 0; i < STUDENTS; i++) {
        float total = 0.0f;
        float average;
        for (j = 0; j < SUBJECTS; j++) total += students[i].marks[j];
        average = total / SUBJECTS;
        printf("%-12s Total: %6.2f  Average: %6.2f  Grade: %c\n",
               students[i].name, total, average, grade_from_average(average));
    }
    return 0;
}
