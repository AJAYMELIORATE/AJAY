#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push() {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow.\n");
        return;
    }
    int val;
    printf("Enter value to push: ");
    scanf("%d", &val);
    stack[++top] = val;
    printf("Element %d has been pushed to the stack.\n", val);
}

void pop() {
    if (top == -1) {
        printf("Cannot perform pop operation.\n");
        return;
    }
    int val = stack[top--];
    printf("Element %d has been popped from the stack.\n", val);
}

void peak() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Element at the top of the stack is: %d\n", stack[top]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements in the stack are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
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
