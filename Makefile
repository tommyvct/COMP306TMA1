CC = clang++
CFLAGS = -Wall
DEBUG = -g
SRC = ./src
BIN = ./bin


TMA1: BIN TMA1Q1 TMA1Q2 TMA1Q3 TMA1Q4 TMA1Q5

debug: BIN TMA1Q1_debug TMA1Q2_debug TMA1Q3_debug TMA1Q4_debug TMA1Q5_debug

BIN: 
	mkdir bin



TMA1Q1: $(SRC)/TMA1Question1.cpp
	$(CC) $(CFLAGS) $(SRC)/TMA1Question1.cpp -o $(BIN)/TMA1Question1

TMA1Q2: $(SRC)/TMA1Question2.cpp
	$(CC) $(CFLAGS) $(SRC)/TMA1Question2.cpp -o $(BIN)/TMA1Question2

TMA1Q3: $(SRC)/TMA1Question3.cpp
	$(CC) $(CFLAGS) $(SRC)/TMA1Question3.cpp -o $(BIN)/TMA1Question3

TMA1Q4: $(SRC)/TMA1Question4.cpp
	$(CC) $(CFLAGS) $(SRC)/TMA1Question4.cpp -o $(BIN)/TMA1Question4

TMA1Q5: $(SRC)/TMA1Question5.cpp
	$(CC) $(CFLAGS) $(SRC)/TMA1Question5.cpp -o $(BIN)/TMA1Question5



TMA1Q1_debug: $(SRC)/TMA1Question1.cpp
	$(CC) $(CFLAGS) $(DEBUG) $(SRC)/TMA1Question1.cpp -o $(BIN)/TMA1Question1

TMA1Q2_debug: $(SRC)/TMA1Question2.cpp
	$(CC) $(CFLAGS) $(DEBUG) $(SRC)/TMA1Question2.cpp -o $(BIN)/TMA1Question2

TMA1Q3_debug: $(SRC)/TMA1Question3.cpp
	$(CC) $(CFLAGS) $(DEBUG) $(SRC)/TMA1Question3.cpp -o $(BIN)/TMA1Question3

TMA1Q4_debug: $(SRC)/TMA1Question4.cpp
	$(CC) $(CFLAGS) $(DEBUG) $(SRC)/TMA1Question4.cpp -o $(BIN)/TMA1Question4

TMA1Q5_debug: $(SRC)/TMA1Question5.cpp
	$(CC) $(CFLAGS) $(DEBUG) $(SRC)/TMA1Question5.cpp -o $(BIN)/TMA1Question5



clean:
	rm -rf $(BIN)