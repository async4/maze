#include <stdio.h>
#include "../inc/show_matrix.h"


void ShowMatrix(int* matrix, int row, int column, int x_axis, int y_axis) {
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (x_axis == i && y_axis == j) {
                printf("\033[1;36m%d\033[0m\t", matrix[x_axis*column + y_axis]);
            } else if (matrix[i*column + j] == 9) {
                printf("\033[01;32m%d\033[0m\t", matrix[i*column + j]);
            } else if (matrix[i*column + j] == 1) {
                printf("\033[1;31m%d\033[0m\t", matrix[i*column + j]);
            } else if (matrix[i*column + j] == 2) {
                printf("\033[1;35m%d\033[0m\t", matrix[i*column + j]);
            } else if (matrix[i*column + j] == 3) {
                printf("\033[1;33m%d\033[0m\t", matrix[i*column + j]);
            } else {
                printf("%d\t", matrix[i*column + j]);
            }
        } printf("\n\n\n");
    }
} 
