#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if (a>=5000)
    {
        printf("Sosur Bari jabo ");
        if (a>=7000)
        {
            printf("Bou niye ghurte jabo");
        }
        else
        {
            printf("Bou niye bari asbo");
        }
    }
    else if (a>=2000)
    {
        printf("Arekta Biye krbo ");
        if (a>=2500)
        {
            printf("Shalikeo biye korbo");
        }
        else
        {
            printf("Basor Krbo");
        }
    }
    else
    {
        printf("Ami Gorib");
    }
    
    return 0;
}