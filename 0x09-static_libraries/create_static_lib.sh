#!/bin/bash
gcc -Wall -pedantic -Werror -Wex -c *.c
ar -rc liball.a *.o
ranlib liball.a 
