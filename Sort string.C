#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    char *S = (char *)malloc((N + 1) * sizeof(char));
    if (S == NULL) {
        return 1; 
    }

    scanf("%s", S);

    int count[26] = {0};

    
    for (int i = 0; i < N; i++) {
        count[S[i] - 'a']++;
    }

    
    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            printf("%c", i + 'a');
            count[i]--;
        }
    }
    printf("\n");

    free(S);
    return 0;
}
