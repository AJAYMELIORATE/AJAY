#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
    struct first*prev;
}*head,*temp,*newnode;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct first*)malloc(sizeof(struct first));
        scanf("%d",&newnode->one);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    temp=newnode;
        while(temp)
        {
            printf("%d",temp->one);
            temp=temp->prev;
        }
}
