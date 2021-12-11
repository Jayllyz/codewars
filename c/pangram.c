#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool is_pangram(const char *string) {
    int len = strlen(string);
    int alphabet[26] = {0};
    for(int i = 0 ; i < len ; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            alphabet[string[i] - 'a'] = 1;
        }
        else if(string[i] >= 'A' && string[i] <= 'Z'){
            alphabet[string[i] - 'A'] = 1;
        }
    }
    for(int j = 0 ; j < 26 ; j++){
        if(alphabet[j] == 0){
            return false;
        }
    }
    return true;
}



int main(int argc, char **argv){
    char *string = "The quick brown fox jumps over the lazy dog.";
    printf("%s\n", is_pangram(string) ? "True" : "False");
    return 0;
}