#!/usr/bin/env bash

num_to="1000000"

for ((n=1; n<=num_to; n++)); do
    out=""
    !((n%3)) && out+='Fizz'
    !((n%5)) && out+='Buzz'
    [[ "$out" == '' ]] && out="$n"
    echo "$out"
done

