#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{

    if(front==-1 && rear==-1)
    {
        front =0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("que is overflow :");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("queue is underflow:");
    }
    else if(front==rear)
    {
        front=rear-1;
        printf("deleted element : %d",queue[front]);
    }
    else
    {
        front=(front+1)%max;
    }
}
void display()
{

    int i=front ;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty:");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%max;
        }
        printf("%d",queue[i]);
    }
}


int main()
{
    int choice=1,x;
    while (1)
    {
        printf("\nEnter Choice\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("enter tyhe elemet which is to done :");
                scanf("%d",&x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();


        }
    }
    return 0;
}
