#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
int main ()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int x=sum(num1,num2);
    printf("%d",x);
    return 0;
}