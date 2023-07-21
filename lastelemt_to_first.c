#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*head=NULL,*tail;
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        head=temp;
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
    temp=tail;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
        break;
    }while(temp!=tail);

}
