#include <stdio.h>
#include <string.h>

int main() {
    char S[1001]; 
    scanf("%s", S);

    int len = strlen(S);
    int isPalindrome = 1; 

    for (int i = 0; i < len / 2; i++) {
        if (S[i] != S[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
