//https://www.codewars.com/kata/5208f99aee097e6552000148
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* breakCamel(char* string){
    int len = strlen(string);
    char* newString = (char *)malloc((len*2) * sizeof(char)); 
    int j=0;
    int i =0;
    for(i=0; i<len*2; i++) {
        if(string[j] >= 'A' && string[j] <= 'Z') {
            newString[i] = ' ';
            i++;
            newString[i] = string[j];
        }
        else {
            newString[i] = string[j];    
        }
       j++;
    }   
    return newString;
}


int main(int argc, char **argv){

    char *str = "hgfhgCcagadeBbegbafbHfcBgdebbbAdfbddbga";
    printf("%s\n", str);
    printf("%s\n", breakCamel(str));

    return 0;
}