#!/usr/bin/nodejs

// Author https://gist.github.com/wiafe
for (var i = 1; i <= 1000000; i++) {
  if (i % 3 === 0) {
      console.log( i + " = " + "Fizz");
  }else if (i % 5 === 0) {
      console.log( i + " = " + "Buzz");
  }else {
      console.log(i);
  }
  if (i % 3 === 0 && i % 5 === 0) {
      console.log( i + " = " + "FizzBuzz");
  }
};

