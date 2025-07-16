#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    unsigned long long fib[51]; 
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= N; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("%llu\n", fib[N]);
    return 0;
}
