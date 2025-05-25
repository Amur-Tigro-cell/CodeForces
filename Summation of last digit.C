#include <stdio.h>

int main() {
    long long n, m; 

    scanf("%lld %lld", &n, &m); 

    int last1 = n % 10; 
    int last2 = m % 10;

    printf("%d\n", last1 + last2); 

    return 0;
}
