#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int m[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = N - 1; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j < M; j++) {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");


    return 0;
}
