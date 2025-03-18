#include<stdio.h>
int main ()
{
    int ar [5];
    for (int j=0;j<=4;j++)
    {
        scanf("%d",&ar[j]);
    }    
    for (int i=0;i<=4;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}