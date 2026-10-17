#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    int value;

    printf("Enter integers (-1 to finish): ");
    while (scanf("%d", &value) == 1 && value != -1) {
        struct Node *node = malloc(sizeof *node);
        if (node == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            while (head != NULL) {
                struct Node *next = head->next;
                free(head);
                head = next;
            }
            return 1;
        }

        node->data = value;
        node->next = NULL;
        if (head == NULL) head = node;
        else tail->next = node;
        tail = node;
    }

    printf("List: ");
    for (struct Node *current = head; current != NULL; current = current->next)
        printf("%d -> ", current->data);
    puts("NULL");

    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}
