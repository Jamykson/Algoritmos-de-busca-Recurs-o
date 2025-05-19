# Makefile
CXX      := g++
CXXFLAGS := -Iinclude_cpp -std=c++17 -Wall

SRCS_CPP := $(wildcard src_cpp/*.cpp)

.PHONY: all clean test_cpp

all: test_cpp

test_cpp:
	@mkdir -p bin
	@$(CXX) $(CXXFLAGS) $(SRCS_CPP) test_cpp/test_algorithms.cpp -o bin/teste_cpp
	@./bin/teste_cpp

clean:
	rm -f bin/teste_cpp
