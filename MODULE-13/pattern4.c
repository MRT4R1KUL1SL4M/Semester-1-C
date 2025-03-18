#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int n,i,j,sp,st;
    scanf("%d",&n);
    sp=n-1,st=1;
    int line=(n*2)-1;
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
        if(i<n)
        {
        sp--;
        st+=2;
        }
        else if(i>=n)
        {
        sp++;
        st-=2;
        }    
        printf("\n");
    }
    return 0;
}