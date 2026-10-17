#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char text[200];
    int vowels = 0;
    size_t i;

    printf("Enter a line: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;

    for (i = 0; text[i] != '\0'; i++) {
        int ch = tolower((unsigned char)text[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
    }

    printf("Vowels = %d\n", vowels);
    return 0;
}
