#include <stdio.h>

int main(void) {
    int H, M, P;
    scanf("%d %d", &H, &M);
    scanf("%d", &P);

    M += P;

    if (M >= 60) {
        H += M / 60;
        M %= 60;
    }

    if (H >= 24) {
        H %= 24; 
    }
    else if(H<0){
        H+=24;
    }
    printf("%d %d\n", H, M);

    return 0;
}