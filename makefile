COMPILER = g++
FLAGS = -g -Wall -std=c++0x
EXEC = p9

all: WikiProcess.o Driver.o
	$(COMPILER) $(FLAGS) -o $(EXEC) Driver.o WikiProcess.o
Driver.o: Driver.cpp
	$(COMPILER) $(FLAGS) -c Driver.cpp
WikiProcess.o: WikiProcess.cpp
	$(COMPILER) $(FLAGS) -c WikiProcess.cpp
clean:
	rm -f *.o $(EXEC)
