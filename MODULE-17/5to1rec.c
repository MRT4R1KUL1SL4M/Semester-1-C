#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarik (int i)
{
    if (i==0) return;
    printf("%d ",i);
    tarik(i-1);
}

int main ()
{
    tarik(5);
    return 0;
}