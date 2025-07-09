#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    
    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;

    
    long long total_tiles = tiles_n * tiles_m;

    printf("%lld\n", total_tiles);
    return 0;
}
