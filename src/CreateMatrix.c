#include <stdlib.h>
#include <time.h>
#include "../inc/create_matrix.h"

int* CreateMatrix(int row, int column) {
    int *matrix =  (int *)malloc(row * column * sizeof(int));
    srand(time(0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrix[i*column + j] = 0+rand()%2;
        }
    }

    matrix[0] = 0;
    int rand_target_row = 1+rand()%row-1;
    int rand_target_column = 1+rand()%column-1; 
    matrix[rand_target_row*column + rand_target_column] = 9;

    return matrix;
}



