#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}