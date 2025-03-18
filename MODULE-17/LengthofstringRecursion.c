#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tarik (char t[],int i)
{
    if (t[i]=='\0') return 0;
    int l=tarik(t,i+1);
    return l+1;
}
int main ()
{
    char t[]="Heldfgrstjry";
    tarik(t,0);
    int length=tarik(t,0);
    printf("%d\n",length);
    return 0;
}