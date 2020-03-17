# task

### compile 
* gcc main.c ./src/CreateMatrix.c ./src/ShowMatrix.c ./src/CheckObstacle.c ./src/CheckTarget.c ./src/Walk.c ./src/CheckWay.c

### run
* ./build/a.out row column

        2 2 1 1 0 1 1 0 1 0 
        1 2 2 1 0 0 1 0 0 1 
        1 2 2 3 1 0 0 0 0 1 
        1 2 1 3 1 1 1 0 1 0 
        0 2 1 1 1 1 1 1 1 1 
        0 2 2 2 2 1 3 1 1 1 
        0 0 1 1 2 3 3 3 1 1 
        0 1 1 1 2 1 1 1 0 0 
        1 0 1 9 2 1 0 0 0 1 
        1 0 0 0 1 0 1 1 0 0 

LOC: (8, 3)
OBS: 0.1.0.0
CHC: 0.0.0.1
OUT: (200) that's it, you are reached the goal :)


        2 3 3 3 1 1 0 0 0 0 
        1 3 1 1 0 1 0 0 0 1 
        3 3 1 1 1 0 1 0 0 1 
        3 1 1 1 1 0 0 0 1 1 
        3 3 1 1 1 1 0 1 1 1 
        3 1 9 1 1 1 1 0 1 1 
        1 0 0 0 1 0 1 1 0 0 
        0 0 0 0 0 0 1 0 1 1 
        1 0 0 1 1 1 0 1 0 1 
        0 1 1 1 0 0 1 1 0 1 

LOC: (0, 0)
OBS: 0.0.0.0
CHC: 0.0.0.0
OUT: (500) oh no, you are lost :(
