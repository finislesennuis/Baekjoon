#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    long long range = max - min + 1;
    bool arr[range];

    for (long long i = 0; i < range; i++) {
        arr[i] = false;
    }

    for (long long i = 2; i * i <= max; i++) {
        long long square = i * i;
        long long start = (min % square == 0) ? (min / square) : (min / square + 1);
        for (long long j = start * square; j <= max; j += square)
        {
            if (j - min >= 0 && j - min < range)
                arr[j - min] = true;
        }
    }

    long long count = 0;
    for (long long i = 0; i < range; i++)
    {
        if (!arr[i])
            count++;
    }

    printf("%lld\n", count);

    return 0;
}