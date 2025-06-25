#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
