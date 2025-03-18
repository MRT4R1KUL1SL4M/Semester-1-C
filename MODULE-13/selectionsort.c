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
    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])  //Asscending ase jodi majhe < eta dei tahole decending hobe
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
            

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}