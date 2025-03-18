#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void tarik(int arr[], int size,int i)
{
    if (i==size) return;
    printf("%d ",arr[i]);
    tarik(arr,size,i+1);
}
int main ()
{
    int arr[3]={10,20,30};
    tarik(arr,3,0);
    return 0;
}