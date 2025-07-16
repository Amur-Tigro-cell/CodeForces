#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int found = 0;
    for (int i = 0; i < N && !found; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == X) {
                found = 1;
                break;
            }
        }
    }

    if (found)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}
