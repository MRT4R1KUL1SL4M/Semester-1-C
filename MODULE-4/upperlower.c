#include<stdio.h>
int main ()
{
    char X;
    scanf("%c",&X);
    if (X>=97)
    {
        X=X-32;
        printf("%c",X);
    }
    else if (X>=65)
    {
        X=X+32;
        printf("%c",X);
    }
    return 0;
}