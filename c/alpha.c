//https://www.codewars.com/kata/526dbd6c8c0eb53254000110
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Function to check if a string is alphanumeric
bool alphanumeric(const char *strin)
{
    if (strin[0] == '\0')
        return false;

    for (unsigned int i = 0; i < strlen(strin); ++i) {
        char c = strin[i];

        if (c == ' ' || c == '_') 
            return false;
        
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) 
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    char *string = "Hello World";
    char *string2 = "Hello_World";
    char *string3 = "HelloWorld123";

    printf("%s is alphanumeric: %s\n", string, alphanumeric(string) ? "true" : "false");
    printf("%s is alphanumeric: %s\n", string2, alphanumeric(string2) ? "true" : "false");
    printf("%s is alphanumeric: %s\n", string3, alphanumeric(string3) ? "true" : "false");
    return 0;
}
