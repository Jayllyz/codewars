//https://www.codewars.com/kata/5259b20d6021e9e14c0010d4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(const char *text)
{
    int len = strlen(text);
    char *reverse = (char *)malloc(len + 1);
    int input = 0;
    int new = 0;
    while (input < len) {
        int word = input;
        while (input < len && text[input] != ' ')
            input++;
        for (int i = input - 1; i >= word; i--)
            reverse[new ++] = text[i];
        if (input < len)
            reverse[new ++] = text[input++];
    }
    reverse[new] = '\0';
    return reverse;
}

int main(int argc, char **argv)
{
    char *text = "This is an example!";
    char *reverse = reverseWords(text);
    printf("%s", reverse);
    free(reverse);
    return 0;
}