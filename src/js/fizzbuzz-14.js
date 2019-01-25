#!/usr/bin/nodejs

// Author https://gist.github.com/kaelig


for (var index = 1; index <= 1000000; index++) {
    switch (true) {
        case (index % 3 === 0 && index % 5 === 0):
            console.log('FizzBuzz');
            break;

        case (index % 3 === 0):
            console.log('Fizz');
            break;

        case (index % 5 === 0):
            console.log('Buzz');
            break;

        default:
            console.log(index);
            break;
    }
}
