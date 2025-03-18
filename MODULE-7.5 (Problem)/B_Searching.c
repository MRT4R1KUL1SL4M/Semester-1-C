# include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s,i;
    scanf("%d",&s);
    int flag=0;
    for(i=0;i<n;i++)
    { if (a[i]==s)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",i);
    }
        return 0;
}