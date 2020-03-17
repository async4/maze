#include <stdio.h>
#include "../inc/checked_way.h"

void CheckWay(int* matrix, int row, int column, int x_axis, int y_axis, CheckedWay* cw) {
    if (x_axis - 1 < 0) {
        cw->up = 0;
    } else if (matrix[(x_axis-1)*column + y_axis] != 2) {
        cw->up = 0;
    } else {
        cw->up = 1;
    }

    if (x_axis + 1 < 0 || x_axis + 1 >= row) {
        cw->down = 0;
    } else if (matrix[(x_axis+1)*column + y_axis] != 2) {
        cw->down = 0;
    } else {
        cw->down = 1;
    }

    if (y_axis + 1 < 0 || y_axis + 1 >= column) {
        cw->right = 0;
    } else if (matrix[x_axis*column + y_axis+1] != 2) {
        cw->right = 0;
    } else {
        cw->right = 1;
    }

    if (y_axis - 1 < 0) {
        cw->left = 0;
    } else if (matrix[x_axis*column + y_axis-1] != 2) {
        cw->left = 0;
    } else {
        cw->left = 1;
    }

    printf("CHC: \033[1;36m%d.%d.%d.%d\033[0m\n",
       cw->up, cw->down, cw->left, cw->right);
}