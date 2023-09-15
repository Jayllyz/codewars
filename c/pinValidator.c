//https://www.codewars.com/kata/55f8a9c06c018a0d6e000132
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool validate_pin(const char *pin)
{
    if (*pin == '\0')
        return false;

    int i = 0;

    while (*(pin + i) != '\0') {
        if (*(pin + i) >= '0' && *(pin + i) <= '9')
            ++i;
        else
            return false;
    }

    if (i == 4 || i == 6)
        return true;
    else
        return false;
}

int main(int argc, char **argv)
{
    char *pin = (char *)malloc(128 * sizeof(char));
    printf("Enter your pin:\n");

    if (fgets(pin, 128, stdin) == NULL) {
        printf("Error: fgets() failed\n");
        exit(EXIT_FAILURE);
    }

    if (validate_pin(pin))
        printf("Valid pin\n");
    else
        printf("Invalid pin\n");

    free(pin);
    return 0;
}