#include <stdio.h>

#define PLAYER "\u25C9"
#define TARGET "\u2764"
#define OBSTACLE "\u2585"
#define PASSED "\u25CF"
#define WILL_PASS "\u25CB" 

void ShowMatrix(int* matrix, int row, int column, int x_axis, int y_axis) {
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (x_axis == i && y_axis == j) {
                printf("\033[0;35m%s \033[0m", PLAYER);
            } else if (matrix[i*column + j] == 9) {
                printf("\033[1;31m%s\033[0m ", TARGET);
            } else if (matrix[i*column + j] == 1) {
                printf("\033[1;30m%s\033[0m ", OBSTACLE);
            } else if (matrix[i*column + j] == 2) {
                printf("\033[1;34m%s\033[0m ", WILL_PASS);
            } else if (matrix[i*column + j] == 3) {
                printf("\033[1;34m%s\033[0m ", PASSED);
            } else {
                printf("\033[0;30m \033[0m ");
            }
        } printf("\n");
    }
} 
