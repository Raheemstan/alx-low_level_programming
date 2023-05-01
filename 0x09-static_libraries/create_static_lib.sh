#!/bin/bash

# Create a static library called liball.a from all the .c files in the current directory
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rc liball.a *.o
ranlib liball.a
