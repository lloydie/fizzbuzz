#!/bin/sh

progs=$(find src/ -type f -executable)

for p in $progs; do
    echo $p
    /usr/bin/time ./$p > /dev/null 
done
