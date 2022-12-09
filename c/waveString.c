//https://www.codewars.com/kata/58f5c63f1e26ecda7e000029
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** wave(char* s)
{
    int len = strlen(s);
    char** result = (char**)malloc(len * sizeof(char*));
    int i, j;
    for (i = 0; i < len; i++) {
        result[i] = (char*)malloc(len + 1);
        for (j = 0; j < len; j++) {
            if (j == i) {
                result[i][j] = s[j] - 32;
            }
            else {
                result[i][j] = s[j];
            }
        }
        result[i][len] = '\0';
    }
    return result;
}

int main(int argc, char** argv)
{
    char** waveStr = wave("hello");
    int len = strlen("hello");
    int i;
    for (i = 0; i < len; i++) {
        printf("%s\n", waveStr[i]);
    }

    for (i = 0; i < len; i++) {
        free(waveStr[i]);
    }
    free(waveStr);
    return 0;
}
