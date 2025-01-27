#include <stdio.h>

int num_count(char str[]) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main() {
    char A[4], B[4], C[4];
    scanf("%s %s %s", A, B, C);
    int num_A = num_count(A);
    int num_B = num_count(B);
    int num_C = num_count(C);
    int rdy_count = num_A * num_B * num_C;

    int count[10] = {0};
    while (rdy_count > 0) {
        int digit = rdy_count % 10;
        count[digit]++;
        rdy_count /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
