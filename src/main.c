#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../inc/create_matrix.h"
#include "../inc/walk_matrix.h"

int main(int argc, char** argv) {
    const int row = atoi(argv[1]);
    const int column = atoi(argv[2]);

    if (row != column) {
        printf("%s", "err: enter a same row and column value.\n");
        return 0;
    } srand(time(0));
    
    int* matrix = CreateMatrix(row, column);
    int x_axis = rand()%row;
    int y_axis = rand()%column;
    Obstacle* obs = (Obstacle*) malloc(sizeof(Obstacle));
    CheckedWay* cw = (CheckedWay*) malloc(sizeof(CheckedWay));

    printf("OUT: %s\n", Walk(matrix, row, column, x_axis, y_axis, obs, cw) == 1 ?
           "\033[1;32mthat's it, you are reached the goal 😎\033[0m" :
           "\033[1;31moh no, you are lost 😭\033[0m");
}
