#include <stdio.h>
#include <stdlib.h>

void move_zeros(size_t len, int *arr)
{
    int *newArr = malloc(len * sizeof(int));

    int zero = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] != 0)
            newArr[i - zero] = arr[i];
        else
            zero++;
    }
    for (int i = len - zero; i < len; i++)
        newArr[i] = 0;

    for (int i = 0; i < len; i++)
        arr[i] = newArr[i];

    free(newArr);
}

int main(int argc, char **argv)
{
    int arr[] = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};
    move_zeros(10, arr);
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}