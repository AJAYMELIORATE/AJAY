#include<stddio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}newnode*,head*,temp*;

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        head=NULL;
        if(head==NULL)
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
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if()
        }

    }


}
