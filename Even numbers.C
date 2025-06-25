#include <stdio.h>

int main() {
    int N, i, found = 0;
    scanf("%d", &N);

    for(i = 2; i <= N; i += 2) {
        printf("%d\n", i);
        found = 1;
    }

    if(!found) {
        printf("-1\n");
    }

    return 0;
}
