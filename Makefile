# Compiler and compiler flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

# Source files and executable name
SRCS := main.cpp D_graph.cpp
EXECUTABLE := ogla

# Object files derived from source files
OBJS := $(SRCS:.cpp=.o)

# Default target
all: $(EXECUTABLE)

# Rule to build the executable
$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f $(OBJS) $(EXECUTABLE)

run:
	./$(EXECUTABLE)

# Phony targets (targets that don't represent files)
.PHONY: all clean
