/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. 
No floats or non-positive integers will be passed.
For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.
*/
#include <stddef.h>
#include <limits.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100
#define MIN 0
long sum_two_smallest_numbers(size_t n, const int numbers[n])
{
    long smaller1 = INT_MAX; //max value of integer 
    long smaller2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < smaller1){
            smaller2 = smaller1;
            smaller1 = numbers[i];
        } else if (numbers[i] < smaller2) 
              smaller2 = numbers[i];
    }
    return smaller1 + smaller2;
}

int main(int argc, char **argv){
srand(time(NULL));
size_t n;
printf("Enter the size of your array ?\n");
scanf("%ld", &n);
int numbers[n];
int i=0;
printf("We will fill your array with random numbers between %d and %d.\n", MAX, MIN);
while(i != n){
    numbers[i] = rand() % (MAX+1-MIN)+MIN;
    printf("%d ", numbers[i]);
    i++;
}
printf("\nSum of the two smallest number is %ld\n", sum_two_smallest_numbers(n,numbers));

return 0;
}