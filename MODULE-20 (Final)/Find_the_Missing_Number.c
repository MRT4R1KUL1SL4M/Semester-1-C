#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long int mul, A, B, C;
        scanf("%lld %lld %lld %lld", &mul, &A, &B, &C);
        if (A == 0 || B == 0 || C == 0) {
            if (mul == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {
            long long int missn = mul / (A * B * C);
            if (missn * A * B * C == mul) {
                printf("%lld\n", missn); 
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
