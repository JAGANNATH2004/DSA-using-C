#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int count=0;
struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int item)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=item;
    if(count==SIZE)
    {
        printf("\nSTACK OVERFLOW\n");
        return;
    }
    else
    {
        newnode->link=top;
        count=count+1;
        top=newnode;
        printf("\nthe inserted item into the stack is :%d\n",newnode->data);
        return;
    }
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("\nstack overflow\n");
    }
    else
    {
        printf("\npoped element=%d\n",top->data);
        temp=top;
        top=top->link;
        count=count-1;
        free(temp);
    }
}
void display()
{
    struct node *temp=top;
    while(temp!=NULL)
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
        printf("\nchoose what you want to do : ");
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("\nenter your option : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the item to be inserted : ");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            default:printf("\ninvalid choice\n");
                    exit(0);
        }
    }
    return;
}
