#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*front=NULL,*rear=NULL,*temp,*newnode;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.enqueue");
        printf("\n2.dequeue");
        printf("\n3.display");
        printf("\nEnter your choice:(1,2,3)");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("INVALID INPUT");
        }
    }
    return 0;
}
void enqueue()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear= newnode;
        newnode->next=front;
    }
}
void dequeue()
{
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d",temp->data);
        front=front->next;
        free(temp);
    }
}
void display()
{
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
        temp=front;
        do
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }while(temp!=front);
}
