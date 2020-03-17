#include <stdlib.h>
#include <unistd.h>
#include "../inc/show_matrix.h"
#include "../inc/check_obstacle.h"
#include "../inc/check_target.h"
#include "../inc/checked_way.h"

int OneWay(Obstacle* obs) {
    int arr[] = {obs->up, obs->down, obs->right, obs->left};
    int count = 0;

    for (int i = 0; i < 4; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }
    return count;
}

int Walk(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs, CheckedWay* cw) {
    system("clear");
    ShowMatrix(matrix, row, column, x_axis, y_axis);
    CheckObstacle(matrix, row, column, x_axis, y_axis, obs);
    CheckWay(matrix, row, column, x_axis, y_axis, cw);
    usleep(33333);

    if (CheckTarget(matrix, row, column, x_axis, y_axis) == 1) {
        return 1;
    } else if (OneWay(obs) != 0) {
        matrix[x_axis*column + y_axis] = 2;
        if (obs->up == 1) {
            x_axis -= 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        } else if (obs->down == 1) {
            x_axis += 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        } else if (obs->right == 1) {
            y_axis += 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        }else if (obs->left == 1) {
            y_axis -= 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        }    
    } else if (OneWay(obs) == 0) {
        matrix[x_axis*column + y_axis] = 3;
        if (cw->up == 1) {
            x_axis -= 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        } else if (cw->down == 1) {
            x_axis += 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        } else if (cw->right == 1) {
            y_axis += 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        }else if (cw->left == 1) {
            y_axis -= 1;
            Walk(matrix, row, column, x_axis, y_axis, obs, cw);
        }
    } else {
        return 0;
    }
}