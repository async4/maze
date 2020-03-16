#include <stdlib.h>
#include "../inc/check_obstacle.h"

int CheckTarget(int* matrix, int row, int column, int x_axis, int y_axis) {
    int target_x_axis = 0, target_y_axis = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i*column + j] == 9 && (i == x_axis && j == y_axis)) {
                return 1;
            }
        }
    }
    return 0;
    
}