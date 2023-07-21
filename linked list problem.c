//Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.
//Example 1:
//Input:
//N = 5
//value[] = {2, 4, 7, 8, 9}
//k = 3
//Output: 8 9 2 4 7
//Explanation:
//Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
//Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
//Rotate 3: 8 -> 9 -> 2 -> 4 -> 7
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, k;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the values of the nodes: ");
    struct node *head = NULL;
    struct node *temp = NULL;
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Enter the number of nodes to shift: ");
    scanf("%d", &k);
    k = k % n; // handle case where k is greater than n
    if (k == 0) { // no need to shift
        printf("The linked list after shifting %d nodes is:\n", k);
        temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    } else { // perform left shift
        temp = head;
        for (int i = 1; i < k; i++) {
            temp = temp->next;
        }
        struct node *newhead = temp->next;
        temp->next = NULL;
        temp = newhead;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = head;
        head = newhead;
        printf("The linked list after shifting %d nodes is:\n", k);
        temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    return 0;
}
