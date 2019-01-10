#!/bin/bash

num_to="$1"

for ((num=1; num<=num_to; num++)); do
  out=""
  (( $num % 3 == 0 )) && out="Fizz"
  (( $num % 5 == 0 )) && out="${out}Buzz"
  echo ${out:-$num}
done
