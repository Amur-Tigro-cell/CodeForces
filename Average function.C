#include <stdio.h>

double findAverage(double arr[], int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);
    
    double arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double avg = findAverage(arr, n);
    printf("%.7lf\n", avg);
    
    return 0;
}
