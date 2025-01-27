#include <stdio.h>

int main() {
    int T, H, W, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &H, &W, &N);

        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;

        printf("%d%02d\n", floor, room);
    }

    return 0;
}