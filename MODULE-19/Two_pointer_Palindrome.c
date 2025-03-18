#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
char pal[100001];
scanf("%s",pal);
int n=strlen(pal);
int i;
int j;
int flag=1;
for ( i = 0,j = n - 1; i < j; i++, j--) 
    {
        if (pal[i]!=pal[j])
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

return 0;
}