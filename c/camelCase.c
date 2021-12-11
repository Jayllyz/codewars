//https://www.codewars.com/kata/5208f99aee097e6552000148
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* breakCamel(char* string){
    int len = strlen(string);
    int k = 0;
    int n=1;
    while (k < len) {
        if (string[k] >= 'A' && string[k] <= 'Z') {
            n++;   
        }
        k++;
    }
    char* newString = (char *)malloc((len+n) * sizeof(char)); 
    int j=0;
    int i =0;
    for(i=0; i<len+n; i++) {
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