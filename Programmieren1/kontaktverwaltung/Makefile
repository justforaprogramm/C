# Compiler
CC = gcc
# Compiler flags
CFLAGS = -Wall -Wextra -O2
# Target executable
TARGET = main
# Source file
SRC = main.c

# Build rule
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean rule
clean:
	rm -f $(TARGET)
