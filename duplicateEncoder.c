//not working in codewars idk why for the moment
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN  128
char* encoder(char* str){
    int i=0,j=0;
    int len = strlen(str);
    char* newStr=(char*)malloc(len*sizeof(char));
    while(i!=len){
        for(j=0;j<len;j++){
            if(strchr(str,str[i]) != strrchr(str,str[i])){
                newStr[j]= ')';
            }
            else{
                newStr[j]='(';
            }
            i++;
        }
    }
    return newStr;
}

int main(int argc, char **argv){
    char* str = (char*)malloc(MAX_LEN*sizeof(char));
    printf("Enter your string (no space):\n");
    scanf("%s",str);
    printf("%s",encoder(str));

    return 0;
}