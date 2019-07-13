CXX = clang++
CXXFLAGS = -Wall
DEBUG = -g
SRC = ./src
BIN = ./bin


all: BIN TMA1Question1 TMA1Question2 TMA1Question3 TMA1Question4 TMA1Question5

debug: BIN TMA1Question1_debug TMA1Question2_debug TMA1Question3_debug TMA1Question4_debug TMA1Question5_debug

BIN: 
	mkdir bin



TMA1Question1: $(SRC)/TMA1Question1.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN)/$@

TMA1Question2: $(SRC)/TMA1Question2.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN)/$@

TMA1Question3: $(SRC)/TMA1Question3.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN)/$@

TMA1Question4: $(SRC)/TMA1Question4.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN)/$@

TMA1Question5: $(SRC)/TMA1Question5.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN)/$@



TMA1Question1_debug: $(SRC)/TMA1Question1.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) $< -o $(BIN)/$@

TMA1Question2_debug: $(SRC)/TMA1Question2.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) $< -o $(BIN)/$@

TMA1Question3_debug: $(SRC)/TMA1Question3.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) $< -o $(BIN)/$@

TMA1Question4_debug: $(SRC)/TMA1Question4.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) $< -o $(BIN)/$@

TMA1Question5_debug: $(SRC)/TMA1Question5.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) $< -o $(BIN)/$@



clean:
	rm -rf $(BIN)