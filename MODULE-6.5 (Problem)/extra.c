#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int a,b,c; //int a,b,d;
    scanf("%d",&a); //scanf("%d",&a);
    b=a%10; //b=a%10;
    c=a/10; //d=a/10;
    if (b%c==0 || c%b==0)  //if(b%d==0 || d%b==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}