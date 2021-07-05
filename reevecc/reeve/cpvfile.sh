#!/usr/bin/env sh
mkdir binary || exit
gcc "$1" -o binary/"$1".o
gcc binary/"$1".o bin/reeve-headers.o bin/reeve-i.o -o "$2"