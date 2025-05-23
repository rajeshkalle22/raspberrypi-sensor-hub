CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude
SRC = src/main.cpp src/led.cpp src/uart.cpp src/sensor.cpp
OUT = sensor_hub

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
