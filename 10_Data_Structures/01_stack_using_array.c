#include <stdio.h>

#define CAPACITY 5

int main(void)
{
    int stack[CAPACITY];
    int top = -1;
    int choice;
    int value;

    do {
        printf("\n1.Push  2.Pop  3.Display  0.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 1;

        if (choice == 1) {
            if (top == CAPACITY - 1) puts("Stack overflow.");
            else {
                printf("Value: ");
                if (scanf("%d", &value) != 1) return 1;
                stack[++top] = value;
            }
        } else if (choice == 2) {
            if (top == -1) puts("Stack underflow.");
            else printf("Popped: %d\n", stack[top--]);
        } else if (choice == 3) {
            int i;
            for (i = top; i >= 0; i--) printf("%d ", stack[i]);
            if (top == -1) printf("Empty");
            putchar('\n');
        } else if (choice != 0) puts("Invalid choice.");
    } while (choice != 0);

    return 0;
}
