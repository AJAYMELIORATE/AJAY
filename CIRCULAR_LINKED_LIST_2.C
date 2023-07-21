#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *newnode, *temp, *head, *tail;

void Insert(int val) {
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    if (head == NULL) {
        newnode->next = NULL;
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        newnode->next = head;
        head = newnode;
    }
    printf("inserted at the beginning: %\n", val);
}

void Display() {
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("THE ELEMENTS ARE :\n");
}

void Delete() {
    temp = head;
    head = head->next;
    printf("%d\n", temp->data);
    free(temp);
}

int main() {
    int choice, val;
    while (1) {
        printf("Enter Choice\n");
        printf("1. insert the elements\n");
        printf("2. display\n");
        printf("3. delete\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Enter value to insert:\n");
                scanf("%d", &val);
                Insert(val);
                break;
            }
            case 2: {
                Display();
                break;
            }
            case 3: {
                Delete();
                break;
            }
            default:
                printf("Invalid choice :\n");
                break;
        }
    }
    return 0;
}