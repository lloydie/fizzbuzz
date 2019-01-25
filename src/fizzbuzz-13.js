#!/usr/bin/nodejs

// Author https://gist.github.com/jdiss
var arr = Array.apply(null, Array(1000000)).map(function (x,i) {
i++;
return ((i%3 === 0) && (i%5 === 0)) ? 'FizzBuzz' : (i%3 === 0) ?'Fizz' : (i%5 === 0) ? 'Buzz': i;
}).forEach(function(element) {
console.log(element);
});
