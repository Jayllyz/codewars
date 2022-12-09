//https://www.codewars.com/kata/526571aae218b8ee490006f4
#include <stdio.h>
#include <stdlib.h>

size_t countBits(unsigned value)
{
    int rem = 0;
    int num_of_1 = 0;
    while (value != 0) {
        rem = value % 2;
        if (rem)
            num_of_1++;
        value /= 2;
    }
    return num_of_1;
}

int main(int argc, char **argv)
{

    int input = 1234;
    printf("%ld\n", countBits(input));

    return 0;
}