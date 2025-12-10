# Compiler
CC = gcc
# Compiler flags
CFLAGS = -Wall -Wextra -O2
# Target executable
TARGET = main
# Source file
SRC = main.c sqlite.c
# libs
libs = -lsqlite3

# main
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(libs)

#w Clean rule
clean:
	rm -f $(TARGET)
