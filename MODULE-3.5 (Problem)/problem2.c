#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div= (float) a/b;
    printf("\n%d",sum);
    printf("\n%d",sub);
    printf("\n%d",mul);
    printf("\n%.2f",div);
    return 0;
}