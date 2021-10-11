#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LEN 120
bool solution(const char *string, const char *ending)
{
    size_t lengthString = strlen(string);
    size_t lengthEnd = strlen(ending);
    return  lengthEnd <= lengthString && !strcmp(string + lengthString - lengthEnd, ending);
}

int main(int argc, char **argv){

    char* string=(char*) malloc(MAX_LEN*sizeof(char));
    char* ending= (char*) malloc(MAX_LEN*sizeof(char));
    printf("Insert a string\n");
    scanf("%s", string);
    printf("Insert another string,\nif your previous string ended with this one, it will return true\n");
    scanf("%s", ending);
    printf("It's %s", solution(string,ending) ? "true" : "false");

    return 0;
}