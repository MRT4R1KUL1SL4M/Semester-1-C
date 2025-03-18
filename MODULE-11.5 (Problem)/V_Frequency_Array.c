#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    int cnt[b+1];
    for (int i =0;i<b+1;i++)
        {
            cnt[i]=0;
        } 
    for (int i =0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        int value=arr[i];
        cnt[value]++;
    }
    for(int i=1;i<=b;i++)
        {
            printf("%d\n", cnt[i]);
        }
        return 0;
}