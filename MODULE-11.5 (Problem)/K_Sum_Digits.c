#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char str[n];
    int sum=0;
    for (int i=0;i<n;i++)
    {
        scanf("%s",str);
        sum=sum+str[i]-'0';
    }
    printf("%d",sum);
    return 0;
}