#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int arr[4]={12,14,15,18};
    printf("%p\n",&arr[3]);
    printf("%d\n",arr[3]);
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+3));
    return 0;
}