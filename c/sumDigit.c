//Recursive sum of all digits in the number
#include <stdio.h>

int sumDigit(int n) {
int result = 0;
 do {
     do {
         result += n % 10;
         n /= 10;
       } while (n > 0);
       n = result;
       result = 0;
 } while (n >= 10);
   
return n;
}

int main(int argc, char **argv){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%d", sumDigit(n));
}