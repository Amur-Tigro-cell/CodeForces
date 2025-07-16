#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int freq[26] = {0};
    scanf("%s", s);

    for (int i = 0; s[i]; i++) {
        freq[s[i] - 'a'] = 1; 
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += freq[i]; 
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
