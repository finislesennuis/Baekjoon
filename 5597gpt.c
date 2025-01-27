#include <stdio.h>

int main() {
    int arr[31] = {0}; // 1부터 30까지 사용 (0은 무시)
    int num;

    // 28개의 숫자 입력 받기
    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        arr[num] = 1; // 입력된 숫자 표시
    }

    // 빠진 숫자 찾기
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0) { // 입력되지 않은 숫자
            printf("%d\n", i);
        }
    }

    return 0;
}