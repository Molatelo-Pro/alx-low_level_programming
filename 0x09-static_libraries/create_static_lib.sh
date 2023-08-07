#!/bin/bash
-Wall -wall -pedantic -Werror -c *.c
ar -ro liball.a *.o
ranlib liball.a
