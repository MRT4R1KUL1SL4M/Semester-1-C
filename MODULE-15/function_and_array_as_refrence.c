#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tarik (int *arr,int sz)
{
    arr[0]=1000;
}



int main ()
{
    int arr[5]={10,20,30,40,50};
    tarik(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}