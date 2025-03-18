#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int arr[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(int j=0;j<3;j++) //Row
        {
            printf("%d ",arr[4][j]);
        }
        
        
        for(int i=0;i<5;i++)   //Column
        {
            printf("\n%d ",arr[i][2]);
        }
    return 0;
}