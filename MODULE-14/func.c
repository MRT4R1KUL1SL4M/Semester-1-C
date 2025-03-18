#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tarikul (int x,int y)
{
    int t=x+y;
    return t;
}
int main ()
{    
    int x,y;
    scanf("%d %d", &x,&y);
    printf("%d\n",tarikul(x,y));
    return 0;
}