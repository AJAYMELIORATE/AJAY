#include<stdio.h>
#include<stdlib.h>
struct node
{
  int n;
  struct node* next;
}*next,*newnode,*temp;
int main()
{
  int n;
  scanf("%d",&n);
  newnode=(struct node*)malloc(sizeof(struct node));
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&newnode->data);
    newnode->next=NULL;
  }
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
  while(temp != NULL)
  {
    printf("%d",&temp->data);
    temp=temp->next;
  }
  int k;
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    for(int j=i+k;j<n-k;j++)
    {
      temp->next=newnode->data;
      newnode->next=temp->data;
      temp->data=temp->next;
      
    }
  }
  
}