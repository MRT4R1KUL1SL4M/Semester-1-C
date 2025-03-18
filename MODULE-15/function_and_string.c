#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tarik (char *st,int size)
{
    printf("%s",st);
}

int main ()
{
    char st[6]="Hello";
    tarik(st,6);
    return 0;
}