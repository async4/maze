CC = gcc

SRC_PATH = ./src/
SRC_FILES = main CheckObstacle CheckTarget CheckWay CreateMatrix ShowMatrix Walk
SRC_END = $(foreach src, $(SRC_FILES), $(SRC_PATH)$(src).c)

BUILD_PATH = ./build/
OUT_NAME = a.out

all:
	$(CC) $(SRC_END) -o $(BUILD_PATH)$(OUT_NAME)

