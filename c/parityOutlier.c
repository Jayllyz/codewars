//https://www.codewars.com/kata/5526fc09a1bbd946250002dc/
#include <stdio.h>
#include <stdlib.h>

int find_outlier(int *values, size_t count)
{
    size_t i = 0;
    int parity = 0;
    int negative = 0;
    for (i = 1; i < count; i++) {
        if (values[i] < 0) {
            values[i] = values[i] * -1;
            negative = 1;
        }
        if (i == 1) {
            parity = values[i] % 2 == 0 ? 0 : 1;
        }
        if (i != 1 && values[i] % 2 == 0) {
            if (parity == 0) {
                negative = 0;
                continue;
            }
            else {
                if (negative == 1) {
                    return values[i] = values[i] * -1;
                }
                return values[i];
            }
        }
        if (i != 0 && values[i] % 2 == 1) {
            if (parity == 1) {
                negative = 0;
                continue;
            }
            else {
                if (negative == 1) {
                    return values[i] = values[i] * -1;
                }
                return values[i];
            }
        }
        negative = 0;
    }
    return values[0];
}

int main(int argc, char **argv)
{
    int tab[5] = {2, -6, 8, -10, -3};
    printf("%d", find_outlier(tab, 5));
    return 0;
}