#!/usr/bin/nodejs

// Author:  https://gist.github.com/arei
for (var i=0;i<=1000000;i++) console.log(!(i%15)&&"fizzbuzz"||!(i%5)&&"buzz"||!(i%3)&&"fizz"||i);
