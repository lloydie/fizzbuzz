# About

Fizzbuzz hacker challenge. How fast can your program play fizzbuzz to 1 million.

# Goals
When running various solutions to the fizzbuzz game i became interested when the
same style of fizzbuzz programs written in bash, javascript and python.

What was more interesting was that the performance of each program would vary 
depending on the range of the game. 

fizzbuzz.sh 100
time=0.003

fizzbuzz.js 100
time=0.3

BUT

fizzbuzz.sh 1000000
time=8 sec

fizzbuzz.js 1000000
time=3.5 sec

To be clear i'm sure some performance analysis following any of Brendan Gregg's
methods would identify what is happing under the hood so to speak.

The more simple goal of the fizzbuzz challenge is to clearly identify language 
constructs and research the different aspects discovered.

Code readability, test driven developement, continous intergration are to name a
few elements of any "real projects" code base. While i hope that v1 can help me
research various languages and there performance. Perhaps v2 could focus on the 
specific platform, networking etc.

# Rules

"Write a program that prints the numbers from 1 to 1_100_00. But for multiples 
of three print “Fizz” instead of the number and for the multiples of five print 
“Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.

1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz Buzz,

# Platform

Each program will be given a docker container on an ec2 instance.

# Languages

There is only one restraint that is the only one language may be used per program.
This stops the use of inlining C etc. I am really looking forward to any Assembler 
submitions.

Further more at this stage the contest is restricted to single thread programs. 
This

# When
I am currently developing this idea working directly on master branch on github.
Any and all contributions are most welcome. As i the game comes together i will 
proactive reach out to various communities for contributions, ideas. At this stage
it is just the idea.

Look forward to hearing any thoughts.
