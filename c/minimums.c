//Return sum of minimums of each rows
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 10

void initArray(int **array)
{
    srand(time(NULL));
    int randomValue;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            randomValue = rand() % 99;
            array[i][j] = randomValue;
        }
    }
}

void showArray(int **array)
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
}

int sumMinimum(int **array, int rows, int cols)
{
    int sum = 0;
    int min = array[0][0];
    for (int i = 0; i < rows; i++) {
        min = array[i][0];
        for (int j = 0; j < cols; j++) {
            if (array[i][j] < min)
                min = array[i][j];
        }
        sum += min;
    }
    return sum;
}

int main(int argc, char **argv)
{

    int **array;

    array = (int **)malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++)
        array[i] = (int *)malloc(COLS * sizeof(int));

    initArray(array);
    showArray(array);
    printf("\nSum of minimum values : %d\n", sumMinimum(array, ROWS, COLS));

    for (int i = 0; i < ROWS; i++)
        free(array[i]);
    free(array);

    return 0;
}