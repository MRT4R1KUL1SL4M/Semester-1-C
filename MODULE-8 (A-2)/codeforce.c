#include <stdio.h>
#include <math.h>

int main() {
    int A,B;
    double mod;
    scanf("%d %d",&A,&B);
    mod=(double)A/B;
    int f,c,r;
    f=floor(mod);
    c=ceil(mod);
    r=round(mod);
    printf("floor %d / %d = %d\n",A,B,f);
    printf("ceil %d / %d = %d\n",A,B,c);
    printf("round %d / %d = %d",A,B,r);
    return 0;
}