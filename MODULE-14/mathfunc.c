#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    int c=ceil(x);
    int f=floor(x);
    int r=round(x);
    int sq=sqrt(x);
    float p=pow(x,y);
    int ab=abs(x);
    printf("%d\n",c);
    printf("%d\n",f);
    printf("%d\n",r);
    printf("%d\n",sq);
    printf("%.3f\n",p);
    printf("%d\n",ab);
    return 0;
}