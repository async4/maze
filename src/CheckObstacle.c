#include <stdlib.h>
#include "../include/check_obstacle.h"


void DefineObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    if (x_axis - 1 < 0) {
        obs->up = 0;
    } else if (*(matrix + (x_axis-1)*column + y_axis) != 0) {
        obs->up = 0;
    } else {
        obs->up = 1;
    }

    if (x_axis + 1 < 0) {
        obs->down = 0;
    } else if (*(matrix + (x_axis+1)*column + y_axis) != 0) {
        obs->down = 0;
    } else {
        obs->down = 1;
    }

    if (y_axis - 1 < 0) {
        obs->left = 0;
    } else if (*(matrix + x_axis*column + y_axis-1) != 0) {
        obs->left = 0;
    } else {
        obs->left = 1;
    }

    if (y_axis + 1 < 0) {
        obs->right = 0;
    } else if (*(matrix + x_axis*column + y_axis+1) != 0) {
        obs->right = 0;
    } else {
        obs->right = 1;
    }

}

void CheckObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    DefineObstacle(matrix, row, column, x_axis, y_axis, obs);
    printf("\x1b[1;32m(%d, %d) up:%d down:%d left:%d right:%d\033[0m\n\n",
           x_axis, y_axis, obs->up, obs->down, obs->left, obs->right);
}