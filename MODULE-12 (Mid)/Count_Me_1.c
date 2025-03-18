#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int d2=0;
    int d3=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            d2++;
        }
        else if(arr[i]%3==0)
        {
            d3 ++;
        }
    }
    printf("%d %d\n",d2,d3);

    return 0 ;
}