#include<stdio.h>
int main ()
{
    int X;
    scanf("%d",&X);
    int a=X/1000;
    if (a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}