#include <stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return(n*fact(n-1));
    }
}
int main()
{
    int n,fact1;
    printf("Enter a number : ");
    scanf("%d",&n);
    fact1=fact(n);
    printf("\nThe factorial of %d is %d",n,fact1);
    printf("\n************ THANK YOU ***********");
}
