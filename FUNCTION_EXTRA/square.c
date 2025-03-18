#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sqr(int a)
{
    int s=a*a;
    printf("Square value of your number is : %d",s);
}
int main ()
{
    int your_nmbr;
    printf("Enter your number for squre :");
    scanf("%d",&your_nmbr);
    sqr(your_nmbr);
    return 0;
}