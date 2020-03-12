#include <stdlib.h>
#include "../include/check_obstacle.h"


void DefineObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    if (x_axis - 1 < 0) {
        obs->up = "false";
    } else if (*(matrix + (x_axis-1)*column + y_axis) == 1) {
        obs->up = "false";
    } else {
        obs->up = "true";
    }

    if (x_axis + 1 < 0) {
        obs->down = "false";
    } else if (*(matrix + (x_axis+1)*column + y_axis) == 1) {
        obs->down = "false";
    } else {
        obs->down = "true";
    }

    if (y_axis - 1 < 0) {
        obs->left = "false";
    } else if (*(matrix + x_axis*column + y_axis-1) == 1) {
        obs->left = "false";
    } else {
        obs->left = "true";
    }

    if (y_axis + 1 < 0) {
        obs->right = "false";
    } else if (*(matrix + x_axis*column + y_axis+1) == 1) {
        obs->right = "false";
    } else {
        obs->right = "true";
    }

}

void CheckObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    DefineObstacle(matrix, row, column, x_axis, y_axis, obs);
    printf("\x1b[1;32m(%d, %d) up:%s down:%s left:%s right:%s\033[0m\n\n",
           x_axis, y_axis, obs->up, obs->down, obs->left, obs->right);
}