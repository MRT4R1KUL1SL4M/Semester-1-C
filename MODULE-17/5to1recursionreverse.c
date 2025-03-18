#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarik (int i)
{
    if (i==6) return;
    tarik(i+1);
    printf("%d ",i);
}
int main ()
{
    tarik(1);
    return 0;
}