#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int arr[row][col];
    int element = row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if (cnt==element)
    {
        printf("The matrix is ""Zero Matrix"" and it has %d element",cnt);
    }
    else
    {
        printf("The matrix is not ""Zero Matrix""");
    }
    return 0;
}