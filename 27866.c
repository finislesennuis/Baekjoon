#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; 
    int i;

    scanf("%s", str);

    scanf("%d", &i);

    printf("%c\n", str[i - 1]);

    return 0;
}