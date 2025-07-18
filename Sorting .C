#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
