#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tarik (int n)
{
    if (n==0) return;
    int x=n%10;
    tarik(n/10);
    printf("%d ",x);
    
}
int main ()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
    int n;
    scanf("%d",&n);
    tarik(n);
    if (n==0)
    {
        printf("0");
    }
    printf("\n");
    }
    return 0;
}