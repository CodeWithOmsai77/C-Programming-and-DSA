#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[200];
    size_t left;
    size_t right;
    size_t length;

    printf("Enter a line: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    text[strcspn(text, "\n")] = '\0';
    length = strlen(text);

    if (length > 0) {
        left = 0;
        right = length - 1;
        while (left < right) {
            char temp = text[left];
            text[left++] = text[right];
            text[right--] = temp;
        }
    }

    printf("Reversed: %s\n", text);
    return 0;
}
