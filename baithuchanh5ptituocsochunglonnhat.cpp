#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T); // S? lu?ng test
    while (T--) {
        int N;
        scanf("%d", &N); // �? d�i d�y A
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // In d�y B
        for (int i = 0; i < N; i++) {
            printf("%d %d ", A[i], A[i]);
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}
