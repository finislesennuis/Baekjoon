#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char num_str1[4], num_str2[4];
    int num1, num2;

    scanf("%3s", num_str1);
    scanf("%3s", num_str2);

    num1 = atoi(num_str1);
    num2 = atoi(num_str2);

    int ones = num2 % 10;
    int tens = (num2 % 100) / 10;
    int hundreds = num2 / 100;

    printf("%d\n", num1 * ones);
    printf("%d\n", num1 * tens);
    printf("%d\n", num1 * hundreds);
    printf("%d\n", num1 * num2);

    return 0;
}