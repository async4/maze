#include <stdio.h>
#include <stdlib.h>
#include "../inc/check_obstacle.h"


void DefineObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    if (x_axis - 1 < 0) {
        obs->up = 0;
    } else if (matrix[(x_axis-1)*column + y_axis] == 1 || matrix[(x_axis-1)*column + y_axis] == 3 || matrix[(x_axis-1)*column + y_axis] == 2) {
        obs->up = 0;
    } else {
        obs->up = 1;
    }

    if (x_axis + 1 < 0 || x_axis + 1 >= row) {
        obs->down = 0;
    } else if (matrix[(x_axis+1)*column + y_axis] == 1 || matrix[(x_axis+1)*column + y_axis] == 3 || matrix[(x_axis+1)*column + y_axis] == 2) {
        obs->down = 0;
    } else {
        obs->down = 1;
    }

    if (y_axis + 1 < 0 || y_axis + 1 >= column) {
        obs->right = 0;
    } else if (matrix[x_axis*column + y_axis+1] == 1 || matrix[x_axis*column + y_axis+1] == 3 || matrix[x_axis*column + y_axis+1] == 2) {
        obs->right = 0;
    } else {
        obs->right = 1;
    }

    if (y_axis - 1 < 0) {
        obs->left = 0;
    } else if (matrix[x_axis*column + y_axis-1] == 1 || matrix[x_axis*column + y_axis-1] == 3 || matrix[x_axis*column + y_axis-1] == 2) {
        obs->left = 0;
    } else {
        obs->left = 1;
    }
}

void CheckObstacle(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    DefineObstacle(matrix, row, column, x_axis, y_axis, obs);
    printf("\nLOC: \033[1;33m(%d, %d)\033[0m\nOBS: \033[1;35mup:%d down:%d left:%d right:%d\033[0m\n",
           x_axis, y_axis,
           obs->up, obs->down, obs->left, obs->right);
}