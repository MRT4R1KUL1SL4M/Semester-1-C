#include<stdio.h>
int main ()
{
    int N,V;
    int psum=0;
    int nsum=0;
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
    {
        scanf("%d",&V);
        if(V>0)
        {
            psum=psum+V;
        }
        else
        {
            nsum=nsum+V;
        }
    }
    printf("%d %d",psum,nsum);
    return 0;
}