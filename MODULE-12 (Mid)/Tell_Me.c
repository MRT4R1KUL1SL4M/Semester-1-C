#include <stdio.h>

int main() {
    int T, N, X,adigit;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &X);
        adigit = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] == X) {
                adigit = 1;
                break;
            }
        }
        if (adigit) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}