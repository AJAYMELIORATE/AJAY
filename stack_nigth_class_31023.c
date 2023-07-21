#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
     char *data;
    struct node  *next;
}*top,*temp,*newnode;
int main()
{
   char str[100];
   gets(str);
   char *word;
   word=strtok(str," ");
   while(word!=NULL)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=word;
       newnode->next=NULL;
       if(top==NULL)
       {
           top=newnode;
       }
       else
       {
           newnode->next=top;
           top=newnode;
       }
       word=strtok(NULL," ");
   }
   temp=top;
   do
   {
       printf("%s ",temp->data);
       temp=temp->next;
   }while(temp!=NULL);
}
