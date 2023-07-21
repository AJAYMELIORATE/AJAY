#include<stdio.h>
#include<stdlib.h>
struct node
{
  int n;
  struct node *next;
}*head,*temp,*newnode;
int main()
{
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("ENTER THE DATA :");
        scanf("%d",&newnode->data);
        newnode->next=null;
        if(head ==null)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp=head;
        while(temp != null)
        {

            printf("%d",temp->data);
            temp=temp->next;
            count ++;

        }
        printf("%d",count);
        return 0;
    }
}
