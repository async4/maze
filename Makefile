CC = gcc
LFLAGS = -w
SRC_PATH = ./src/
SRC_FILES = main CheckObstacle CheckTarget CheckWay CreateMatrix ShowMatrix Walk
SRC_END = $(foreach src, $(SRC_FILES), $(SRC_PATH)$(src).c)

BUILD_PATH = ./build/a.out

all:
	$(CC) $(LFLAGS) $(SRC_END) -o $(BUILD_PATH)

