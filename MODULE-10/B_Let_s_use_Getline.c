#include<stdio.h>
#include<string.h>
int main ()
{
    char S[1000001];
    fgets(S,100001,stdin);

    int i=0;
    while(S[i]!='\\')
    {
        printf("%s",S[i]);
        i++;
    }
    return 0;
}