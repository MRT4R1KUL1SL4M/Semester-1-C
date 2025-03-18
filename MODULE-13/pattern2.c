#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int n,i,j,st=1;
    scanf("%d",&n);
    int sp=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=st;j++)
        {
            printf("*");
        }
        sp--;
        st+=2;
        printf("\n");
    }
    return 0;
}