#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[200];

    printf("Enter a line: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    text[strcspn(text, "\n")] = '\0';

    printf("Length = %zu characters\n", strlen(text));
    return 0;
}
