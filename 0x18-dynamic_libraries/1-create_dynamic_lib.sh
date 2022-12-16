#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c
gcc *.o -shared -o liball.so
