#include<stdio.h>
#include<string.h>
int main ()
{
    char S[10001];
    char T[10001];
    scanf("%s",S);
    scanf("%s",T);
    int ln1=strlen(S);
    int ln2=strlen(T);
    printf("%d %d\n",ln1,ln2);
    printf("%s %s",S,T);
    return 0;
}