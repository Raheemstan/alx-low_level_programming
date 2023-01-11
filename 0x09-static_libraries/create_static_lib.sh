#!/bin/bash

# Compile all the .c files in the current directory into object files
for c_file in *.c; do
    gcc -c "$c_file" -o "${c_file%.c}.o"
done

# Create a static library called liball.a from the object files
ar -rcs liball.a *.o

# Print the contents of the library to the terminal
ar -t liball.a
