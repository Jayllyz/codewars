#include <stdio.h>

int find_odd(size_t length, const int array[length])
{
    for (size_t i = 0; i < length; i++) {
        int count = 0;
        for (size_t j = 0; j < length; j++) {
            if (array[j] == array[i])
                count++;
        }
        if (count % 2 == 1)
            return array[i];
    }
    return -1;
}

int main(int argc, char **argv)
{
    int array[] = {20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5};
    printf("%d", find_odd(17, array));
    return 0;
}