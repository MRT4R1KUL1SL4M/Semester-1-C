#include<stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int a,i;
    int e=0,o=0,n=0,p=0;
    for (i=1;i<=N;i++){
        scanf("%d",&a);
        if (a%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
        if (a>0)
        {
            p=p+1;
        }
        else if (a<0)
        {
            n=n+1;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}