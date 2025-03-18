#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);  //user koyta value dibe/ koto variable er array hobe?
    int ar[n]; //array er variable n porjonto
    int sum=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]); //array er value input
        sum=sum+ar[i]; //jeita value input nibe seita sathe sathe sum er sathe jog kore sum e rekhe dibe
    }
    printf("%d",sum); //total sum print korbe
    return 0;
}