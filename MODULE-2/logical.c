#include<stdio.h>
int main()
{
    int a=2,b=3;
    int c= a==b && a<b; // Both side is not same
    printf("%d",c);
    return 0;
}