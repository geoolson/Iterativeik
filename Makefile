CC=g++
CFLAGS=

ik: iterativeik.cpp main.cpp
	$(CC) -Wall main.cpp iterativeik.cpp
