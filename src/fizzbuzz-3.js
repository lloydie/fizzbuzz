#!/usr/bin/nodejs

// Author: Kevlin Hennery
// taken from FizzBuzz Trek

fizzbuzz = (
    lambda n:
        'Fizz' * (n % 3 == 0) +
        'Buzz' * (n % 5 == 0) +
        str(n) * (n % 3 != 0 and n % 5 != 0))

fizzbuzz
