/*Given two integers a and b, which can be positive or negative, find the sum of all the integers between and
 including them and return it. If the two numbers are equal return a or b.
*/
#include <stdio.h>

int get_sum(int a , int b) {
    int sum = 0;
    if(a==b){
        return a;
    }
    if(a<b){
        while (a <= b) {
            sum += a;
            a++;
        }
    }else{
        while (a >= b) {
            sum += b;
            b++;
        }
    }
  return sum;
}


int main(int argc, char **argv) {
    int a,b;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &a, &b);
    printf("Sum of numbers between %d and %d is %d\n", a,b,get_sum(a,b));
    return 0;
}