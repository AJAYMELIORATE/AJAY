#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next;
}*head,*tail,*newnode;

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
        {
        struct node *newnode = (struct node*) malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        } else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Traverse the linked list and store the data of each node in an array.
    int arr[n];
    struct node *ptr = head;
    for (int i = 0; i < n; i++) {
        arr[i] = ptr->data;
        ptr = ptr->next;
    }

    // Use two pointers to compare the data of the nodes.
    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (arr[left] != arr[right]) {
            printf("No\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("Yes\n");
    return 0;
}
