#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);  // Read number of test cases

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        long long fact = 1;

        for (int j = 1; j <= N; j++) {
            fact *= j;
        }

        printf("%lld\n", fact);
    }

    return 0;
}
