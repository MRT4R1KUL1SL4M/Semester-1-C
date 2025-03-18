#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    char s[100];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int value=s[i]-'a';
        count[value]++;
    }


    // for(int i=0;i<26;i++)
    // {
    //     printf("%c - %d\n",i+97,count[i]);
    // }



    // for(int i=0;i<26;i++)
    // {
    //     if(count[i]!=0)
    //     {
    //         printf("%c - %d\n",i+97,count[i]);
    //     }
        
    // }

    for(int i=0;i<strlen(s);i++)
    {
        if(count[i]!=0)
        {
            int value=s[i]-'a';
            if(count[value]!=0)
            {
                printf("%c - %d\n",value+97,count[value]);
                count[value]=0;
            }
            
        }
        
    }
    return 0;
}