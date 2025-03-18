#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int input,k=1;
    scanf("%d",&input);
    for(int i=1;i<=input;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}