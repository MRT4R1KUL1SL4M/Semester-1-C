#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tarik (int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main ()
{
    int arr[5]={1,2,3,4,5};
    tarik(arr,5);
    return 0;
}