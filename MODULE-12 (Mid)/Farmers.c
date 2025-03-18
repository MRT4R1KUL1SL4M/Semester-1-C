#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int add= M1 + M2;
        int mul=D*M1;
        int div=(mul/add);
        int fewerdays=D-div;
        printf("%d\n", fewerdays); 
    }

    return 0;
}
