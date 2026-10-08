#Define the compiler to use
CC = gcc

#Define compiler flags
CFLAGS = -Wall -Wextra -g -I./include

#Define lib flags
#LDLIBS = -lraylib -lm

#Define linker flags
LDFLAGS = -L./lib -lraylib -lm

############## Operating System Detection ####################

#Detect Windows
ifeq ($(OS),Windows_NT)
	LDFLAGS += -lgdi32 -lwinmm
else # Detect MacOS and Linux
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Darwin)
		LDFLAGS += -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL
	endif
endif

#Find all .c files in the src directory
SRC = $(wildcard src/*.c)

#Create a list of .o files by replacing src/ and .c with build/ and .o
OBJ = $(SRC:src/%.c=build/%.o)

#Define the final executable name
TARGET = build/main

#The default rule executed when you type 'make'
all: $(TARGET)

#Rule to link all object files into the final executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

#Rule to compile individual source files into object files
build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

#Rule to clean the build directory
clean:
	rm -f build/*.o build/game build/main


