#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*head,*tail;
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=i+1;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    tail->next=head;
    temp=head;
    while(temp->next!=temp)
    {
        temp->next=temp->next->next;
        temp=temp->next;
    }
    printf("%d",temp->data);
}
