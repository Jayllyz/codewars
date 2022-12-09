//Given an array of ones and zeroes, convert the equivalent binary value to an integer.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int binaryToDecimal(int array[4], int len)
{
    int i;
    int j = 1;
    int number = array[len] * pow(2, 0);
    for (i = len - 1; i >= 0; i--) {
        number = number + array[i] * pow(2, j);
        j++;
    }
    return number;
}

int main(int argc, char **argv)
{
    int binary[4] = {1, 0, 0, 1};
    printf("%d", binaryToDecimal(binary, 3));
    return 0;
}