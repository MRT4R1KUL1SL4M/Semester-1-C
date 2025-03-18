#include <stdio.h>
#include <stdlib.h>
void fun(int N, int A[], int B[]) {
    int C[N];
    for (int i = 0; i < N; i++) {
        C[i] = abs(A[i] - B[i]);
        printf("%d ", C[i]);
    }
    printf("\n");
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }
        fun(N, A, B);
    }
    return 0;
}
