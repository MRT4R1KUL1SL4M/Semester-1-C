# include<stdio.h>
int main ()
{
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
        if(sum>0)
        {
            printf("%lld",sum);
        }

        else
        {
            printf("%lld",(sum*-1));
        }
        return 0;
}