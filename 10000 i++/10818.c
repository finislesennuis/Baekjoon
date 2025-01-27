#include <stdio.h>
#include <limits.h>

int min_array(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int max_array(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main(void) {
    int N;
    scanf("%d", &N);

    int arr[N];
    int num;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    int size = N;

    printf("%d %d\n", min_array(arr, size), max_array(arr, size));

    return 0;
}
