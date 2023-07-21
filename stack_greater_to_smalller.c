#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*top,*temp,*newnode,*temp1;
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(top==NULL)
        {
            top=ptr;
        }
        else
        {
            ptr->next=top;
            top=ptr;
        }
    }
    temp=top;
    while(temp->next!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp1->data>temp->data)
            {
            int a=temp1->data;
            temp1->data=temp->data;
            temp->data=a;
            }
            temp1=temp->data;
        }
        temp=temp->next;
    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
