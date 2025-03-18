#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    char str1[10001],str2[10001];
    scanf("%s %s",str1,str2);
    int a=strcmp(str1,str2);
    if (a==0)
    {
        printf("%s",str1);
    }
    else
    {
        if (a<0)
        {
            printf("%s",str1);
        }
        else
        {
            printf("%s",str2);
        }
    
    }
    return 0;
}