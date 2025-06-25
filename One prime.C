#include <stdio.h>
#include <math.h>

int main() {
    int X, is_prime = 1;
    scanf("%d", &X);

    if (X <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= sqrt(X); i++) {
            if (X % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
