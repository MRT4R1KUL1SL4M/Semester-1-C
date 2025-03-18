#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int x;
    scanf("%d",&x) ;
    int *p=&x;
    printf("%p\n",p);
    printf("%d\n",*p);
    *p=200;
    printf("%d\n",x);
    return 0;
}