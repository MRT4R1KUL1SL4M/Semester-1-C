#include<stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int i,a,max=0;
    for (i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(max<a)
        {
           max=a;
        }
    }
    printf("%d",max);
    return 0;
}