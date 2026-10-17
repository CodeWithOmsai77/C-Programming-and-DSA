#include <stdio.h>

#define CAPACITY 5

int main(void)
{
    int queue[CAPACITY];
    int front = 0;
    int rear = -1;
    int count = 0;
    int choice;
    int value;

    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  0.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 1;

        if (choice == 1) {
            if (count == CAPACITY) puts("Queue is full.");
            else {
                printf("Value: ");
                if (scanf("%d", &value) != 1) return 1;
                rear = (rear + 1) % CAPACITY;
                queue[rear] = value;
                count++;
            }
        } else if (choice == 2) {
            if (count == 0) puts("Queue is empty.");
            else {
                printf("Removed: %d\n", queue[front]);
                front = (front + 1) % CAPACITY;
                count--;
            }
        } else if (choice == 3) {
            int i;
            for (i = 0; i < count; i++)
                printf("%d ", queue[(front + i) % CAPACITY]);
            if (count == 0) printf("Empty");
            putchar('\n');
        } else if (choice != 0) puts("Invalid choice.");
    } while (choice != 0);

    return 0;
}
