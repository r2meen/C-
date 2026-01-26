CXX = g++ 

CXXFAGS = -std=c++11 -Wall 

SRC = main.cpp LinearEquation.cpp PlotData.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = program.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFAGS) -o $@ $(TARGET) $(OBJ)

%.o: %.cpp
$(CXX) $(CXXFAGS) -c $< -o $@

clean:
	del /Q $(OBJ) $(TARGET)
