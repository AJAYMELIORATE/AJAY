#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
    if (rear == SIZE - 1) {
        printf("Queue is full.\n");
        return;
    }
    int val;
    printf("Enter the value to be added: ");
    scanf("%d", &val);
    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = val;
}
void dequeue() {
    if (front == -1) {
        printf("Queue is empty.\n");
    }
    int val = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    printf("Element %d has been removed from the queue.\n", val);
}

void peek() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Element at the front of the queue is: %d\n", queue[front]);
}
void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    int choice;
    while (1) {
        printf("\nEnter Choice\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}
