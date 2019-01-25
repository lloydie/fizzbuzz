#!/bin/bash

num_to="$1"

for ((i=1;i<=num_to;i++)); do
    if ! ((i%5)) && ! ((i%3)); then
        echo FizzBuzz
    elif ! ((i%3)); then
        echo Fizz
    elif ! ((i%5)); then
        echo Buzz
    else
        echo $i
    fi;
done
