#include <stdio.h>
#include <stdlib.h>

int maxSequence(const int* array, size_t n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += array[j];
            if (currentSum > maxSum)
                maxSum = currentSum;
        }
    }
    return maxSum;
}

int main(int argc, char** argv)
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printf("%d", maxSequence(arr, 9));
    return 0;
}