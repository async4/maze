#ifndef check_obstacle
#define check_obstacle

typedef struct {
    char* up;
    char* down;
    char* left;
    char* right;
} Obstacle;

void CheckObstacle(int*, int, int, int, int, Obstacle*);

#endif