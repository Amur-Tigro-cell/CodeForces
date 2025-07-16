#include <stdio.h>

int main() {
    int n, a[1005];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            a[i] = 1;
        else if (a[i] < 0)
            a[i] = 2;
       
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
