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

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    int isJaduMatrix = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            int x = m[i][j];

            if (i == j) 
            {
                if (x != 1)
                {
                    isJaduMatrix = 0;
                }
            }
            else if (i + j == N - 1) 
            {
                if (x != 1)
                {
                    isJaduMatrix = 0;
                }
            }
            else 
            {
                if (x != 0)
                {
                    isJaduMatrix = 0;
                }
            }
        }
    }


    if (isJaduMatrix) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
