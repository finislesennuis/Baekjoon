#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    long long range = max - min + 1;
    bool squaressnum[range];

    for (long long i = 0; i < range; i++) {
        squaressnum[i] = false;
    }


    for (long long i = 2; i * i <= max; i++) {
        long long square = i * i;
        long long w_t_m = (min + square - 1) / square;
        long long c_s = w_t_m * square;

        for (long long num = c_s; num <= max; num += square) {
            long long index = num - min;
            if (index >= 0 && index < range) {
                squaressnum[index] = true;
            }
        }
    }

    long long squaressnum_count = 0;
    for (long long i = 0; i < range; i++) {
        if (!squaressnum[i]) {
            squaressnum_count++;
        }
    }

    printf("%lld\n", squaressnum_count);

    return 0;
}