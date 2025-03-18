#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void world ()
{
    printf("world Start\n");
    printf("world End\n");
}


void hello()
{
    printf("Hello Start\n");
    world (); //Waiting
    printf("Hello End\n");
}


int main ()
{
    printf("Main Start\n");
    hello(); //Waiting
    printf("Main End\n");
    return 0;
}