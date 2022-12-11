//https://www.codewars.com/kata/52c31f8e6605bcc646000082
#include <stdio.h>
#include <stdlib.h>

#define TARGET 9

void twoSum(unsigned count, const int numbers[count], int target, unsigned *index1, unsigned *index2)
{
    *index1 = *index2 = 0;
    int temp = 0;
    for (unsigned i = 0; i < count; ++i) {
        for (unsigned j = 0; j < count; ++j) {
            if (i != j)
                temp = numbers[i] + numbers[j];

            if ( i!=j && temp == target ) {
                temp = numbers[i] + numbers[j];
                *index1 = i;
                *index2 = j;
            }
            temp = 0;
        }
    }
}

int main(int argc, char **argv)
{
    int numbers[] = {2, 7, 11, 15};
    unsigned index1, index2;
    twoSum(4, numbers, TARGET, &index1, &index2);
    printf("index1= %u, index2= %u = %d", index1, index2, TARGET);
    return 0;
}