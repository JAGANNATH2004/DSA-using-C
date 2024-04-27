#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int f=-1;
int r=-1;
int q[SIZE];
void enqueue(int);
void dequeue();
void display();
void main()
{
    int ch,value;
    while(1)
    {
        printf("\nOPTIONS ARE : \n");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.EXIT\n");
        printf("\nENTER THAT YOU WANT TO DO : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nENTER THE VALUE TO BE INSERTED : ");
                    scanf("%d",&value);
                    enqueue(value);
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:printf("YOU HAVE BEEN EXITED");
                    exit(0);
                    break;
            default:printf("\nENTER A VALID NUMBER FROM THE OPTIONS BELOW\n");
        }
    }
    return;
}
void enqueue(int item)
{
    if(r==SIZE-1)
    {
        printf("\nQUEUE IS OVER FLOW\n");
    }
    else if(f==-1 && r==-1)
    {
        f=0;
        r=0;
        q[r]=item;
        printf("THE INSERTED ELEMENT IN QUEUE IS : %d",item);
    }
    else
    {
        q[++r]=item;
        printf("THE INSERTED ELEMENT IN QUEUE IS : %d",item);
    }
    return;
}
void dequeue()
{
    int x;
    if(f==-1 && r==-1)
    {
        printf("\nQUEUE IS UNDER FLOW \n");
    }
    else
    {
        x=q[f];
        printf("\nTHE DELETED ELEMENT IS %d ",x);
    }
    if(f==r)
    {
        f=r=-1;
    }
    else
    {
        f++;
    }
    return;
}
void display()
{
    int i;
    if(f==-1 && r==-1)
    {
        printf("\nTHE QUEUE IS EMPTY \n");
    }
    else
    {
        printf("\nTHE ELEMENTS IN THE QUEUE ARE/IS : \n");
        for(i=f;i<=r;i++)
        {
            printf("Q[%d] IS %d\n",i,q[i]);
        }
    }
    return;
}

