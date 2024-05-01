#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    char exp[100];
    char s[SIZE];
    int i,top=-1;
    printf("\nENTER THE EXPRESSION :");
    gets(exp);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
        {
            s[++top]=exp[i];
        }
        else if(exp[i]=='}')
        {
            if(s[top]=='{')
            {
                top--;
            }
            else
            {
                printf("\nUNBALANCED EXPRESSION");
                exit(0);
            }
        }
        else if(exp[i]==']')
        {
            if(s[top]=='[')
            {
                top--;
            }
            else
            {
                printf("\nUNBALANCED EXPRESSSION");
                exit(0);
            }
        }
        else if(exp[i]==')')
        {
            if(s[top]=='(')
            {
                top--;
            }
            else
            {
                printf("\nUNBALANCED EXPRESSSION");
                exit(0);
            }
        }
    }
    if(top==-1)
    {
        printf("BALANCED EQUATION");
    }
    else
    {
        printf("UNBALANCED EQUATION");
    }
}
