#include <stdio.h>

int main() {

    int check[42] = {0}; 
    int count = 0; 

    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int left = num % 42; 
        if (check[left] == 0) { 
            check[left] = 1; 
            count++; 
        }
    }

    printf("%d\n", count);

    return 0;
}
