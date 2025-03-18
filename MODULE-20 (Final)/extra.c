#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int n,i,j,sp,st;
    scanf("%d",&n);
    sp=4 + (n + 1) / 2;4 + (n + 1) / 2;
    st=1;
    int line=6 + (n - 1) / 2;
    for(i=1;i<=line;i++)
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
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for (int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}