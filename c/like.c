//https://www.codewars.com/kata/5266876b8f4bf2da9b000362
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n])
{
    char *result = NULL;
    if (n == 0) {
        result = malloc(sizeof(char) * strlen("no one likes this") + 1);
        strcpy(result, "no one likes this");
    }
    if (n == 1) {
        result = malloc(sizeof(char) * strlen(names[0]) + 11);
        strcpy(result, names[0]);
        strcat(result, " likes this");
    }
    if (n == 2) {
        result = malloc(sizeof(char) * strlen(names[0]) + strlen(names[1]) + 20);
        strcpy(result, names[0]);
        strcat(result, " and ");
        strcat(result, names[1]);
        strcat(result, " like this");
    }
    if (n == 3) {
        result = malloc(sizeof(char) * strlen(names[0]) + strlen(names[1]) + strlen(names[2]) + 30);
        strcpy(result, names[0]);
        strcat(result, ", ");
        strcat(result, names[1]);
        strcat(result, " and ");
        strcat(result, names[2]);
        strcat(result, " like this");
    }
    if (n > 3) {
        result = malloc(sizeof(char) * strlen(names[0]) + strlen(names[1]) + 20);
        strcpy(result, names[0]);
        strcat(result, ", ");
        strcat(result, names[1]);
        strcat(result, " and ");
        char *temp = malloc(sizeof(char) * 10);
        sprintf(temp, "%ld", n - 2);
        strcat(result, temp);
        strcat(result, " others like this");
    }

    return result;
}

int main(int argc, char *argv[])
{
    char const *names[] = {"Peter", "Jacob", "Alex", "Max", "John", "Mark"};
    printf("%s", likes(6, names));
}