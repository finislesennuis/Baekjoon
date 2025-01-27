#include <stdio.h>

int Max(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int findDuplicate(int a, int b, int c) {
    if (a == b) {   
        return a;
    } else if (b == c) {
        return b;
    } else {
        return c;
    }
}

int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c) {
        printf("%d", 10000+a*1000);
    } else if (a==b || b==c || a==c) {
        int duplicate = findDuplicate(a, b, c);
        printf("%d", 1000+duplicate*100);
    } else {
        printf("%d", Max(a,b,c)*100);
    }
    return 0;
}
