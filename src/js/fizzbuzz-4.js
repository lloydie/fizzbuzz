#!/usr/bin/nodejs
// Author: https://gist.github.com/dstop75
var i, values = [, , 'fizz', , 'buzz', 'fizz', , , 'fizz', 'buzz', , 'fizz', , , 'fizzbuzz'];

for (i = 0; i < 1000000; console.log(values[i++ % 15] || i));
