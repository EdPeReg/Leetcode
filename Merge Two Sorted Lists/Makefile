CXX = g++
CXXFLAGS = -Wall -Wextra -ggdb -fsanitize=address,undefined
SRC = main.cpp
BIN = main

$(BIN) : $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $@

clean:
	@echo Cleaning binaries...
	@rm -v $(BIN)
