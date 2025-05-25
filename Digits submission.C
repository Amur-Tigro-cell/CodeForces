#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    double result = (double)A / B;

    printf("floor %d / %d = %d\n", A, B, (int)floor(result));
    printf("ceil %d / %d = %d\n", A, B, (int)ceil(result));
    printf("round %d / %d = %d\n", A, B, (int)round(result));

    return 0;
}
