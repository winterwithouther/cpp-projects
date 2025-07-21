# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Source files
SRCS = main.cpp linkedlist.cpp node.cpp

# Object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = run

# Default target to build executable
all: $(TARGET)

# How to build the executable from object files
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# How to build each object file from its source file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<