#include<stdio.h>
int main ()
{
    int X;
    scanf("%d",&X);
    int i;
    for (i=1;i<=X;i++)
    {
        int n;
        scanf("%d",&n);
        do
    {
        printf("%d ",n%10);
        n=n/10;
    }
    while (n!=0);
    printf("\n");
    }
    return 0;
}