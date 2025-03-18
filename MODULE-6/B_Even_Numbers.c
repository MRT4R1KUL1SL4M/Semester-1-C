#include<stdio.h>
int main ()
{
    int N;
    int i;
    scanf("%d",&N);
    if (N==1)
    {
        printf("-1");
    }
    else
    {
        for (i=1;i<=N;i++){
        if (i%2==0)
        {
            printf("%d\n",i);
        }
    }
    }
    return 0;
}