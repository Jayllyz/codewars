//Given an integral number, determine if it's a square number
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_square(int n)
{

    int intValue;
    float floatValue;
    float Value = sqrt((double)n);
    int Value = floatValue;

    return intValue == floatValue ? true : false;
}

int main(int argc, char **argv)
{
    int number, choice;
    do {
        printf("\nWhich number would you like see if it's a perfect square?\n");
        scanf("%d", &number);
        printf("It's %s for %d \n", is_square(number) == 1 ? "true" : "false", number);
        printf("RESTART = 1\n");
        scanf("%d", &choice);
    } while (choice == 1);

    return 0;
}