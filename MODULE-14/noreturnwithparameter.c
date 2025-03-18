#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarikul(int x,int y)
{
    int s=x+y;
    printf("%d",s);
}

int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    tarikul(a,b);
    return 0;
}