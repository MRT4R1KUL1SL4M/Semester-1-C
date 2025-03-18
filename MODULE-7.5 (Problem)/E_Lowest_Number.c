#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);
    int arr[n];
    int l=arr[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < l) {
            l = arr[i];
        }
    }
    int li = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == l) {
            li = i+1;
            break;
        }
    }
    printf("%d %d",l,li);
    return 0;
}