#!/usr/bin/env nodejs

var num_to = 1000000

for(i = 1 ; i <= num_to; i++) {
    var out = "";
    if(i % 3 == 0) { out += "Fizz" }
    if(i % 5 == 0) { out += "Buzz" }
    if(out == "") { out = i }
    console.log(out)
}
