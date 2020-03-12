#ifndef check_obstacle
#define check_obstacle

typedef struct {
    int up;
    int down;
    int left;
    int right;
} Obstacle;

void CheckObstacle(int*, int, int, int, int, Obstacle*);

#endif