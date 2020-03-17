#include <stdio.h>
#include <stdlib.h>
#include "inc/create_matrix.h"
#include "inc/walk_matrix.h"
/*
    up ?
        -- (obs->up) == 1--> 
            -- (target(matrix, row, column, x_axis, y_axis) == True) --> END
                -- (oneWay() == True) --> fill_current() --> walk()
                    -- (fill_before()) --> walk()
    
    down ?
        -- (obs->down) != True -->
            -- (target() == True) --> END
                -- (oneWay() == True) --> fill_curent() --> walk()
                    -- (fill_before()) --> walk()
    
    right ?
        -- (obs->right) != True -->
            -- (target() == True) --> END
                -- (oneWay() == True) --> fill_current() --> walk()
                    --  (fill_before()) --> walk()
    
    left ?
        -- (obs->left) != True -->
            -- (target() == True) --> END
                -- (oneWay() == True) --> fill_current() --> walk()
                    -- (fill_before()) --> walk()
*/


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
    CheckedWay* cw = (CheckedWay*) malloc(sizeof(CheckedWay));

    printf("OUT: %s\n", Walk(matrix, row, column, x_axis, y_axis, obs, cw) == 1 ?
           "\033[1;32m(200) that's it, you are reached the goal :)\033[0m" :
           "\033[1;31m(500) oh no, you are lost :(\033[0m");

}
