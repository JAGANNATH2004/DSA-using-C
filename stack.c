#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void push (int);
void pop();
void display();
int s[SIZE];
int top=-1;
void main()
{
    int ch,value;
    while(1)
    {
        printf("\n THE OPTION ARE : ");
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("\n select what you want to do : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("ENTER THE VALUE TO BE INSERTED : ");
                   scanf("%d",&value);
                   push(value);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            default:printf("\n**************INVALID CHOICE**************");
        }
    }
    return ;
}
void push(int item)
{
    if(top<SIZE-1)
    {
        s[++top]=item;
        printf("\n %d item is inserted in to the stack position %d\n",item,top);
    }
    else
    {
        printf("\n THE STACK OVERFLOW \n");
    }
    return;
}
void pop()
{
    if(top==-1)
    {
        printf("\nTHE STACK IS UNDERFLOW\n:");
    }
    else
    {
        printf("THE DELETED ITEM FROM THE STACK IS %d\n",s[top]);
        top--;
    }
    return;
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK EMPTY\n");
    }
    else
    {
        printf("\nTHE ELEMENTS OF THE STACK ARE : ");
        for(i=top;i>=0;i--)
        {
            printf("\ns[%d] is %d",i,s[i]);
        }
    }
    return;
}


