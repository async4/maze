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

    int stats = Walk(matrix, row, column, x_axis, y_axis, obs);
    if (stats == 0) {
        printf("no way! %d\n", stats);
    }

    if (stats == 1) {
        printf("acces to target\n");
    }

}
