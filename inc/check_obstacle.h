#ifndef check_obstacle
#define check_obstacle

typedef struct obstacle {
    int up;
    int down;
    int left;
    int right;
} Obstacle;

void CheckObstacle(int*, int, int, int, int, Obstacle*);
#endif