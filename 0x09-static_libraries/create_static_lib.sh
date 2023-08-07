#!/bin/bash
-Wall -wall -pedantic -Werror -c *.c
ar -rc liball.a *.c
ranlib liball.a
