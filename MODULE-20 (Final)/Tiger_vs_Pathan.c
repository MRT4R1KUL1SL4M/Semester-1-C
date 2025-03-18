#include <stdio.h>
#include <string.h>
void tarik (char *S, int N)
{
    int T = 0, P = 0;
    for(int i = 0; i < N; i++)
        {
        if(S[i] == 'T')
        {
            T++;
        } else
        {
            P++;
        }
    }
    if(T > P)
        {
        printf("Tiger\n");
        }
    else if(P > T)
        {
            printf("Pathaan\n");
        }
    else
        {
            printf("Draw\n");
        }
}

int main()
{
    int T;
    scanf("%d", &T);

    for(int t = 0; t < T; t++)
        {
        int N;
        scanf("%d", &N);

        char S[N];
        scanf("%s", S);

    tarik (S, N);
        }

    return 0;
}