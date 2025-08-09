#include <stdio.h>


int add(int x, int y) {
    return x + y;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int result = add(X, Y);
    printf("%d\n", result);
    return 0;
}
