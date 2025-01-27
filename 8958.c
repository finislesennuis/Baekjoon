#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (T--) {
        char str[81];
        scanf("%s", str);

        int sum = 0;
        int total = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'O') {
                sum++;
                total += sum; 
            } else {
                sum = 0;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}