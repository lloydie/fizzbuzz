# About

The Hacker Fizzbuzz challenge. Fastest to 1 million.

2 Class Compiled & Scripted.

When running various solutions to the fizzbuzz game i became interested when the
same style of fizzbuzz programs written in bash and javascript would perform drastically
different when playing to 1 million. Bash won playing to 100. Javascript wins playing 
to 1million, by an order of magnitude.I could conclude from this that if you need to 
count to 1 million and your choice is between bash and javascript, you get 3x the 
performance. C plays to 1 millions in the same time bash can play to 100.

Fizzbuzz is really cool at analyzing languages for performance, resource utilisation etc.
The more i looked at code samples the more intreged i became at the various choices
we have and how they affect performance, utilisation and code readability and indeed
the development environment variations and tuning is really cool.

# Contributions
All are welcome

I'm still working out the best submittion mechanisms git pulls etc. 
But a web ui will be available for "live" submittions.


# Rules
"Write a program that prints the numbers from 1 to 1 million. But for multiples 
of three print “Fizz” instead of the number and for the multiples of five print 
“Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.

The program will run 5 times and the average of the 5 will be the result.

# Caveats
- no pre-defined data. you cant cat a file, you have to play the game.

# Platform
A Docker container using alpine-slim base image with any of your required dependancys
that are built and not included in the execution time of the program. 

# Languages
Any language that alpine-slim can support.

# When
I am currently developing this idea working directly on master branch on github.
Any and all contributions are most welcome. As i the game comes together i will 
proactive reach out to various communities for contributions, ideas. At this stage
i am putting everything together. Any thoughts are most welcome.

# Future Work
Research into submittions will obviously raise considerations such as the
size of the total image, resource usage etc. Code readability, tdd, ci, to name a
few elements of any "real projects" code base. While i hope that v1 can help me
research various languages and there performance. Perhaps v2 could focus on the 
specific platform, networking requirements or "best practices", and the ramifications
of different choices.

- Testing submittions against various base images. Compare performance/utilisation.

- Adding multiple player daemons with a control. This adds a real level of complexity
that is in any real app and indeed would flesh out various patterns and issues with
various platform techniques.

