CC = gcc

SRC_PATH = ./src/
SRC_FILES = CheckObstacle CheckTarget CheckWay CreateMatrix ShowMatrix Walk
SRC_END = $(foreach src, $(SRC_FILES), $(SRC_PATH)$(src).c)

BUILD_PATH = ./build/
OUT_NAME = a.out

all:
	$(CC) main.c $(SRC_END) -o $(BUILD_PATH)$(OUT_NAME)

