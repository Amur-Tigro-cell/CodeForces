#include <stdio.h>
#include <math.h>

int main() {
    float N;
    int intPart;
    float decimalPart;

    scanf("%f", &N);

    intPart = (int)N;
    decimalPart = N - intPart;

    if (decimalPart == 0) {
        printf("int %d\n", intPart);
    } else {
        
        int dec = (int)(decimalPart * 100000); 
        
        while (dec % 10 == 0) {
            dec /= 10;
        }
        printf("float %d %d\n", intPart, dec);
    }

    return 0;
}
