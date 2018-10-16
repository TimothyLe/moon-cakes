CXX = `wx-config --cxx`
CXXFLAGS = -Wall -Wextra -g -std=c++17 -O0
LDFLAGS = `wx-config --libs`
# Objects below here
OBJ = $(OBJFOLDER)/main.o 
OBJFOLDER = obj
EXECUTABLE = exec
all: $(EXECUTABLE)
$(EXECUTABLE) : $(OBJ)
    $(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJ) -o $@
$(OBJFOLDER)/main.o : main.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@
$(OBJFOLDER)/%.o: %.cpp %.h
    $(CXX) $(CXXFLAGS) -c `wx-config --cxxflags`$< -o $@
.PHONY:
clean:
    @rm obj/*.o $(EXECUTABLE)