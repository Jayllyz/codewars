//https://www.codewars.com/kata/521c2db8ddc89b9b7a0000c1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5

int *snail(size_t *outsz, int (*mx)[ROWS], size_t rows, size_t cols)
{
    size_t vertical = 0, horizontal = 0;
    size_t size = rows * cols;
    *outsz = size;

    int *snail = (int *)malloc(size * sizeof(int));
    if (snail == NULL) {
        printf("Error: malloc failed\n");
        return NULL;
    }

    rows = 0;
    cols--;

    while (rows < cols) {

        while (horizontal < cols) //top row
            *snail++ = mx[vertical][horizontal++];

        while (vertical < cols) //right column
            *snail++ = mx[vertical++][horizontal];

        while (horizontal > rows) //bottom row
            *snail++ = mx[vertical][horizontal--];

        while (vertical > rows) //left column
            *snail++ = mx[vertical--][horizontal];

        vertical++, horizontal++, rows++, cols--; //move to the next inner matrix
    }

    if (rows == cols) //row and column == 3 (for 5x5 matrix)
        *snail++ = mx[vertical][horizontal];

    //point to the start of the array
    snail -= size;

    return snail;
}

int main(int argc, char **argv)
{
    int matrix[ROWS][ROWS];
    srand(time(NULL));
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < ROWS; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < ROWS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int *result = NULL;
    size_t outsz = 0;

    result = snail(&outsz, matrix, ROWS, ROWS);
    printf("Snail : ");
    for (size_t i = 0; i < outsz; i++) {
        printf("%d ", result[i]);
    }

    free(result);
    return 0;
}
