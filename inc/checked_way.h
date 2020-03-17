#ifndef checked_way
#define checked_way

typedef struct {
    int up;
    int down;
    int left;
    int right;
} CheckedWay;

void CheckWay(int*, int, int, int, int, CheckedWay*);

#endif