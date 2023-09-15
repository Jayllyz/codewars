//https://www.codewars.com/kata/54b42f9314d9229fd6000d9c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128
char* encoder(char* str)
{
    int i = 0;
    int len = strlen(str);
    char* newStr = (char*)malloc((len + 1) * sizeof(char));

    if (len == 1)
        newStr[i] = '(';

    while (i < len) {
        for (int j = 0; j < len; j++) {
            if (i == j)
                continue;

            if (str[i] == str[j] || (str[i] >= 'a' && str[i] <= 'z' && str[i] - 32 == str[j]) || (str[i] >= 'A' && str[i] <= 'Z' && str[i] + 32 == str[j])) {
                newStr[i] = ')';
                break;
            }
            else
                newStr[i] = '(';
        }
        i++;
    }
    newStr[len] = '\0';
    return newStr;
}

int main(int argc, char** argv)
{
    char* str = (char*)malloc(MAX_LEN * sizeof(char));
    printf("Enter your string (no space):\n");

    if (fgets(str, MAX_LEN, stdin) == NULL) {
        printf("Error: fgets() failed\n");
        exit(EXIT_FAILURE);
    }

    char* newStr = encoder(str);
    printf("Result : %s\n", newStr);

    free(newStr);
    free(str);
    return 0;
}