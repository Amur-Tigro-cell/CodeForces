#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N + 1];

        for (int i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }

        int min_val = A[1] - 1;  
        int result = INT_MAX;

        for (int j = 2; j <= N; j++) {
            
            int current = min_val + A[j] + j;
            if (current < result)
                result = current;

           
            int candidate = A[j] - j;
            if (candidate < min_val)
                min_val = candidate;
        }

        printf("%d\n", result);
    }

    return 0;
}
