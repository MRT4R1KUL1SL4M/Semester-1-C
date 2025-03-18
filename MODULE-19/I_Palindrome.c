#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
char pal[100001];
char a[100001];
scanf("%s",pal);
strcpy(a,pal);
int n=strlen(a);
int i;
int j;
for ( i = 0,j = n - 1; i < j; i++, j--) {
char tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
if (strcmp(pal,a)==0)
{
printf("YES");
}
else
{
printf("NO");
}

return 0;
}