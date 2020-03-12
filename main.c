#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "include/create_matrix.h"
#include "include/show_matrix.h"
#include "include/check_obstacle.h"

void walk(int* matrix, int row, int column, int x_axis, int y_axis, Obstacle* obs) {
    system("clear");
    ShowMatrix(matrix, row, column, x_axis, y_axis);
    CheckObstacle(matrix, row, column, x_axis, y_axis, obs);
    usleep(300000);

}

int main(int argc, char** argv) {
    const int row = atoi(argv[1]);
    const int column = atoi(argv[2]);

    if (row != column) {
        printf("%s", "err: enter a same row and column value.\n");
        return 0;
    }
    
    int* matrix = CreateMatrix(row, column);
    int x_axis = 0, y_axis = 0;
    Obstacle* obs = (Obstacle*) malloc(sizeof(Obstacle));

    
    walk(matrix, row, column, x_axis, y_axis, obs);
    

    // system("clear");
        
        


   
}