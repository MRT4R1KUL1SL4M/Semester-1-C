#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);  //Input from user
    if(a>=100) //First condition
    {
        printf("Ami barger khabo");
    }
    else if (a>=50)
    {
        printf("Ami barger khabo na, Ami Coke khabo"); //2nd condition
    }
    
    else
    {
        printf("Ami Kisui Khabo Na"); //Jodi 2 tai na hoy
    }
    return 0;
}