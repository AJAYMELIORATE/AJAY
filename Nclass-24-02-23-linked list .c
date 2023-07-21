#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
}*head,*temp,*newnode;
int main ()
{   
    int n,i;
    printf("enter the size of the lst: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head=NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else    
        {
            temp->next=newnode;
            temp=newnode;
        }
        
    }
    while(temp!=NULL)
    {
        printf("MY LIST IS: %d",temp->data);
        temp=temp->next;
    }
    
    
    
}