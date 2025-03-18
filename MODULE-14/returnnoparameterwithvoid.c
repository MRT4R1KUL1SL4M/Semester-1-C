#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main ()
{
    printf("%d",sum()); // (sum(***eikhane kono value nibena**))
    return 0;
}