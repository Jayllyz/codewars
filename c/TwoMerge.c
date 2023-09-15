//https://www.codewars.com/kata/5656b6906de340bd1b0000ac
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string,
 the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.*/

#define MAX_LEN 128

char *longest(const char *s1, const char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxLen = len1 + len2;

    char *result = (char *)malloc((maxLen + 1) * sizeof(char));
    if (!result)
        return NULL;

    int alpha[26] = {0};

    for (int i = 0; i < len1; i++) {
        alpha[s1[i] - 'a'] = 1;
    }

    for (int i = 0; i < len2; i++) {
        alpha[s2[i] - 'a'] = 1;
    }

    int j = 0;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 1) {
            result[j] = i + 'a';
            j++;
        }
    }

    result[j] = '\0';
    return result;
}

int main(int argc, char **argv)
{
    char *s1 = (char *)malloc(MAX_LEN * sizeof(char));
    char *s2 = (char *)malloc(MAX_LEN * sizeof(char));

    printf("Enter your first string:\n");
    if (fgets(s1, MAX_LEN, stdin) == NULL) {
        printf("Error: fgets() failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter your second string:\n");
    if (fgets(s2, MAX_LEN, stdin) == NULL) {
        printf("Error: fgets() failed\n");
        exit(EXIT_FAILURE);
    }

    char *result = longest(s1, s2);
    printf("\ns1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("Result: %s\n", result);

    free(s1);
    free(s2);
    free(result);
    return 0;
}
