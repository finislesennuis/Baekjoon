#include <stdio.h>
#include <string.h>

int main() {

    int alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 97 + i;
    }

    char S[101];
    scanf("%s", S);


    int pos[26];
    for (int i = 0; i < 26; i++) {
        pos[i] = -1;
    }

    for (int i = 0; i < strlen(S); i++) {
        char c = S[i];
        int index = c - 'a';
        if (pos[index] == -1) {
            pos[index] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", pos[i]);
    }

    return 0;
}
