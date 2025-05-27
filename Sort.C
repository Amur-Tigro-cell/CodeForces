#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    
    int a = A, b = B, c = C;

  
    if (A > B) { int temp = A; A = B; B = temp; }
    if (A > C) { int temp = A; A = C; C = temp; }
    if (B > C) { int temp = B; B = C; C = temp; }

    
    printf("%d\n%d\n%d\n\n", A, B, C);

    
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
