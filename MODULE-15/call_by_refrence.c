#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarik (int*p)
{
    printf("%d\n",*p);
    *p=500;
}
int main ()
{
    int x=100;
    tarik(&x);
    printf("%d\n",x);
    return 0;
}