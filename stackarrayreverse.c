#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *front = NULL,*newnode,*temp,*rear = NULL;

void enqueue() {
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }



}

void dequeue() {
    if (front == NULL) {
        printf("Cannot perform pop operation.\n");

    }
    temp = front;
    int val = front->data;
    rear = front->next;
    free(temp);
    printf("Element %d has been popped from the stack.\n", val);

}

void peak() {
    if (front == NULL) {
        printf("Stack is empty.\n");
    }
    else{
        printf("Element at the front of the stack is: %d\n", front->data);

    }


}

void display() {
    if (front == NULL) {
        printf("Stack is empty.\n");
    }
    printf("Elements in the queue are:\n");
    temp = front;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nEnter Choice\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. peak\n");
        printf("4. display\n");
        printf("5. exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peak();
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
