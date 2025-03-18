#include<stdio.h>
#include<string.h>
int main ()
{
    char S[1000001];
    fgets(S,1000000,stdin);
    int ln=strlen(S);
    int i=0;
    int sum=0;
    while(i < ln && S[i] != '\n')
    {
        sum=sum+(S[i]-'0');
        i++;
    }
    printf("%d",sum);
    return 0;
}