CC = clang++
CFLAGS = -Wall
DEBUG = -g



TMA1: TMA1Q1 TMA1Q2 TMA1Q3

debug:TMA1Q1_debug TMA1Q2_debug TMA1Q3_debug



TMA1Q1: TMA1Question1.cpp
	$(CC) $(CFLAGS) TMA1Question1.cpp -o TMA1Question1

TMA1Q2: TMA1Question2.cpp
	$(CC) $(CFLAGS) TMA1Question2.cpp -o TMA1Question2

TMA1Q3: TMA1Question3.cpp
	$(CC) $(CFLAGS) TMA1Question3.cpp -o TMA1Question3



TMA1Q1_debug: TMA1Question1.cpp
	$(CC) $(CFLAGS) $(DEBUG) TMA1Question1.cpp -o TMA1Question1

TMA1Q2_debug: TMA1Question2.cpp
	$(CC) $(CFLAGS) $(DEBUG) TMA1Question2.cpp -o TMA1Question2

TMA1Q3_debug: TMA1Question3.cpp
	$(CC) $(CFLAGS) $(DEBUG) TMA1Question3.cpp -o TMA1Question3



clean:
	rm TMA1Question1 TMA1Question2 TMA1Question3