#include <stdio.h>

#define AGENT "\u25C9" // 0
#define TARGET "\u2764" // 9
#define OBSTACLE "\u25A2" // 1
#define WILL_PASS "\u25CB" // 2
#define PASSED "\u25CF" // 3

void ShowMatrix(int* matrix, int row, int column, int x_axis, int y_axis) {
    int color = 1+rand()%7;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (x_axis == i && y_axis == j) {
                printf("\033[0;3%dm%s \033[0m", color, AGENT);
            } else if (matrix[i*column + j] == 9) {
                printf("\033[1;3%dm%s\033[0m ", color, TARGET);
            } else if (matrix[i*column + j] == 1) {
                printf("\033[1;38m%s\033[0m ", OBSTACLE);
            } else if (matrix[i*column + j] == 2) {
                printf("\033[1;34m%s\033[0m ", WILL_PASS);
            } else if (matrix[i*column + j] == 3) {
                printf("\033[1;34m%s\033[0m ", PASSED);
            } else {
                printf("  ");
            }
        } printf("\n");
    }

    printf("\nagnt: \033[0;35m%s\033[0m trgt: \033[1;31m%s\033[0m wp: \033[1;34m%s\033[0m pass: \033[1;34m%s\033[0m obs: \033[1;38m%s\033[0m", AGENT, TARGET, WILL_PASS, PASSED, OBSTACLE);
} 
