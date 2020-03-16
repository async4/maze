#include <stdlib.h>
#include <unistd.h>
#include "../inc/show_matrix.h"
#include "../inc/check_obstacle.h"
#include "../inc/check_target.h"
#include "../inc/walk_matrix.h"

#define SLEEP 99999

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

int Walk(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    system("clear");
    ShowMatrix(matrix, row, column, x_axis, y_axis);
    CheckObstacle(matrix, row, column, x_axis, y_axis, obs);
    usleep(SLEEP);

    if (CheckTarget(matrix, row, column, x_axis, y_axis) == 1) {
        return 1;
    } else if (obs->up == 1) {
        if (OneWay(obs) == 1) {
            matrix[x_axis*column + y_axis] = 3;
        } else {
            matrix[x_axis*column + y_axis] = 2;
        }
        x_axis -= 1;
        Walk(matrix, row, column, x_axis, y_axis, obs);
    } else if (obs->right == 1) {
        if (OneWay(obs) == 1) {
            matrix[x_axis*column + y_axis] = 3;
        } else {
            matrix[x_axis*column + y_axis] = 2;
        }
        y_axis += 1;
        Walk(matrix, row, column, x_axis, y_axis, obs);
    } else if (obs->down == 1) {
        if (OneWay(obs) == 1) {
            matrix[x_axis*column + y_axis] = 3;
        } else {
            matrix[x_axis*column + y_axis] = 2;
        }
        x_axis += 1;
        Walk(matrix, row, column, x_axis, y_axis, obs);
    } else if (obs->left == 1) {
        if (OneWay(obs) == 1) {
            matrix[x_axis*column + y_axis] = 3;
        } else {
            matrix[x_axis*column + y_axis] = 2;
        }
        y_axis -= 1;
        Walk(matrix, row, column, x_axis, y_axis, obs);
    } else {
        return 0;
    }
}