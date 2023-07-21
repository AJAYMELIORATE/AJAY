#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void count();
void createfront();
void insertmiddle();
void insertend();

struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
int main()
{
    int num;
    while(1)
    {
        printf("***Singly Linked List***\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.count the elements\n");
        printf("4.createfront\n");
        printf("5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
		create();
        break;
        case 2:
        display();
        break;
        case 3:
        count();
        break;
		case 4:
		createfront();
		break;
		
        default:
            printf("Invalid");
        }


    }
}
void create()
{
    int n,i,count=0;
    printf("enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
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

    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
        {
            printf("%d",temp->data);
        }

}
void count()
{
    int count=0;
    while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
            printf("%d",count);

        
}
void insertfront ()
{
    int n,i,count=0;
    printf("enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data you have to inssert ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        newnode-> = temp->next;
		head=newnode;

    }
}
void insertend ()
{
    int n,i,count=0;
    printf("enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data you have to inssert ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
		while (temp->next!=NULL)
		{
			temp=temp->next;
		}
        temp->next=newnode;

    }
}
void insertmid()
{
    int pos,j;
    newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nENTER THE DATA THAT YOU WANT TO INSERT:");
	scanf("%d",&pos);
	temp=head;
	for(j=1;j<pos;j++)
	{
		temp=temp->next;
		nextnode->=temp->next;
		temp->next=newnode;
	}
}
