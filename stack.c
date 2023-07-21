#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *top = NULL,*newnode,*temp;

void push() {
    int val;
    printf("Enter value to push: ");
    scanf("%d", &val);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;
    printf("Element %d has been pushed to the stack.\n", val);
}

void pop() {
    if (top == NULL) {
        printf("Cannot perform pop operation.\n");

    }
    temp = top;
    int val = top->data;
    top = top->next;
    free(temp);
    printf("Element %d has been popped from the stack.\n", val);
}

void peak() {
    if (top == NULL) {
        printf("Stack is empty.\n");

    }
    printf("Element at the top of the stack is: %d\n", top->data);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    }
    printf("Elements in the stack are:\n");
    temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nEnter Choice\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peak\n");
        printf("4. display\n");
        printf("5. exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
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
