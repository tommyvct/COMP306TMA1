CC = clang++
CFLAGS = -g -Wall

TMA1: TMAQ1

TMAQ1: TMA1Question1.cpp
	$(CC) $(CFLAGS) TMA1Question1.cpp -o TMA1Question1


clean:
	rm TMA1Question1