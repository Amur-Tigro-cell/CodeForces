#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int max = 0;  
    int x;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > max) {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}
