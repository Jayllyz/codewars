#include <stdio.h>
#include <stdlib.h>

double mean_square_error(size_t n, const int a[n], const int b[n])
{
    int *temp = malloc(n * sizeof(int));
    double value = 0;
    for (size_t i = 0; i < n; ++i) {
        temp[i] = (a[i] - b[i]) * (a[i] - b[i]);
        value += temp[i];
    }
    free(temp);
    return value / n;
}

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 4, 3, 2, 1};
    printf("%f", mean_square_error(5, a, b));
    return 0;
}