#!/bin/bash
gcc -c ./*.c
gcc ar rc liball.a ./*.o
gcc libran liball.a
