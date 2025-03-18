#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarik(int x)
{
    x=100;
}
int main ()
{
    int x=10;
    tarik(x);
    printf("%d",x);
    return 0;
}