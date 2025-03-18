#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int tarik (long long int n)
{
    if (n==0)
    {
        return 1;
    }
    long long int x=tarik(n-1);
    return x*n;
}
int main ()
{
    long long int n;
    scanf("%lld",&n);
    long long int a= tarik(n);
    printf("%lld",a);
    return 0;
}