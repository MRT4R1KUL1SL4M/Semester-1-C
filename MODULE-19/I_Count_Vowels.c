#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int vow (char str[],int i)
{
    if (str[i]=='\0')
    {
        return 0;
    }
    int ans=vow(str,i+1);
    if (str[i]<='A' && str[i]<='Z')
    {
        str[i]=str[i]+32;
    }
    if (str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}


int main ()
{
    char str [100001];
    fgets(str,100001,stdin);
    int cnt=vow(str,0);
    printf("%d",cnt);
    return 0;
}