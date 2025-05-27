#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    double left = B * log(A);
    double right = D * log(C);

    if (left > right)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
