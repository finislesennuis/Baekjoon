 #include <stdio.h>

int main(void) {
    int arr[9];
    int max;
    int index;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    index = 1;

    for (int i = 1; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    }

    printf("%d\n%d\n", max, index);

    return 0;
}
