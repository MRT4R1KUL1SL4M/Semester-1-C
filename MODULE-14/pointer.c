#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int x=10;
    int *p =&x;
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*p);
    *p=18;
    printf("%d\n",x);
    return 0;
}