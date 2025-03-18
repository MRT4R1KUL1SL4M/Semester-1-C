#include <stdio.h>

int main() {
    int T,u,l,d;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char str[10001];
        u=0;
        l=0;
        d=0;
        scanf("%s", &str);
        for (int i = 0; str[i] != '\0'; i++) {
           if (str[i] >= 'A' && str[i] <= 'Z') {
                u++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z') {
                l++;
            }
            else if (str[i] >= '0' && str[i] <= '9') {
                d++;
        }
        }
        printf("%d %d %d\n", u,l,d); 
    }
    return 0;
}