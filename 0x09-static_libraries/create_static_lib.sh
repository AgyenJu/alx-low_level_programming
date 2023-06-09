#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.o
ar rc liball.a *.o
