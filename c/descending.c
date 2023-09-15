//https://www.codewars.com/kata/5467e4d82edf8bbf40000155
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//discovered PRIu64 and strtoull() during this kata

uint64_t descendingOrder(uint64_t n)
{
    char str[21]; //uint64_t = 20 digits + '\0' max (ngl I googled this)
    snprintf(str, sizeof(str), "%" PRIu64, n);
    //PRIu64 -> print uint64_t

    size_t len = strlen(str);
    for (size_t i = 0; i < len - 1; i++) {
        for (size_t j = 0; j < len - i - 1; j++) {
            if (str[j] < str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    uint64_t result = strtoull(str, NULL, 10);
    //strtoull() -> convert string to long int (10 is base 10)

    return result;
}

int main(int argc, char **argv)
{
    uint64_t n = 123456789;
    printf("Result: %" PRIu64 "\n", descendingOrder(n));
    return 0;
}