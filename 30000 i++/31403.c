#include <stdio.h>
#include <stdlib.h> 

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", A + B - C);

    char str[100];
    sprintf(str, "%d%d", A, B);
    int combined = atoi(str);
    printf("%d", combined - C);

    return 0;
}
