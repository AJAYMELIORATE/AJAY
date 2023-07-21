#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue() {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be enqueued: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (front == NULL) {
        front = rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
    printf("%d has been enqueued to the queue.\n", newnode->data);
}

void dequeue() {
    if (front == NULL) {
        printf("Cannot perform dequeue operation. Queue is empty.\n");
        return;
    }
    struct node *temp;
    temp = front;
    int val = front->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    printf("%d has been dequeued from the queue.\n", val);
}

void peek() {
    if (front == NULL) {
        printf("Cannot perform peek operation. Queue is empty.\n");
        return;
    }
    printf("Element at the front of the queue is: %d\n", front->data);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are:\n");
    struct node *temp = front;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nEnter Choice\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
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
