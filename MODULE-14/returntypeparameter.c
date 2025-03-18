#include <stdio.h>

int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int k=sum(12,18);
    printf("%d",k);
    return 0;
}