#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char text[300];
    int words = 0;
    int inside_word = 0;
    size_t i;

    printf("Enter a line: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;

    for (i = 0; text[i] != '\0'; i++) {
        if (isspace((unsigned char)text[i])) inside_word = 0;
        else if (!inside_word) {
            inside_word = 1;
            words++;
        }
    }

    printf("Word count = %d\n", words);
    return 0;
}
