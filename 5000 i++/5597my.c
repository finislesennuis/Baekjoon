#include <stdio.h>

int main() {
    int arr[28];
    int num1 = -1, num2 = -1; 

    for (int i = 0; i < 28; i++) {
        scanf("%d", &arr[i]);
    }

    for (int current = 1; current <= 30; current++) {
        int found = 0;
        for (int i = 0; i < 28; i++) {
            if (arr[i] == current) {
                found = 1;
                break;
            }
        }
        if (!found) {
            if (num1 == -1) {
                num1 = current;
            } else {
                num2 = current;
                break;
            }
        }
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("%d\n%d\n", num1, num2);

    return 0;
}
