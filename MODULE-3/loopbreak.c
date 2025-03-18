#include<stdio.h>
int main ()
{
    int i,n;
    for (i=1;i<=40;i++)
    {
        if (i>30)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
} 