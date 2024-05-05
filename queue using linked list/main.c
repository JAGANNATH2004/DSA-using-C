#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int count=0;
struct node
{
    int data;
    struct node *link;
};
typedef struct node *node;
node front=NULL,rear=NULL;
void enqueue(int item)
{
    node newnode=malloc(sizeof(struct node));
    newnode->data=item;
    newnode->link=NULL;
    if(count==SIZE)
    {
        printf("\nQUEUE IS FULL\n");
        return;
    }
    else
    {
        if(front==NULL&&rear==NULL)
        {
            front=rear=newnode;
            count=count+1;
            printf("\nTHE INSERTED ITEM INTO THE QUEUE IS %d",item);
        }
        else
        {
            rear->link=newnode;
            count=count+1;
            rear=newnode;
            printf("\nTHE INSERTED ITEM INTO THE QUEUE IS %d",item);
        }
    }
    return;
}
void dequeue()
{
    node temp;
    if(front==NULL)
    {
        printf("\nQUEUE IS EMPTY\n");
    }
    else
    {
        temp=front;
        front=front->link;
        count=count+1;
        if(front==NULL)
        {
            rear=NULL;
        }
        printf("\nTHE DELETED ITEM IS %d",temp->data);
        free(temp);
    }
}
void display()
{
    node temp=front;
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}
int main()
{
    int item,ch;
    while(1)
    {
        printf("\nChoose what you want to do : ");
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("\nenter your option : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the item to be inserted : ");
                    scanf("%d",&item);
                    enqueue(item);
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("\ninvalid choice\n");
                    break;
        }
    }
    return;
}
