-- a FizzBuzz (and FizzBuzzBaz) solution by Aaron Contorer.
-- This implementation is designed for extensibility,
-- as the list of tags can be easily edited, loaded from a file, etc.
-- Number range is set >100 so as to demonstrate the FizzBuzzBaz case.
 
fizzBuzz i = if null desc then show i else desc where 
   desc = concat [label | (j,label) <- tags, 0 == rem i j]
   tags = [ (3,"Fizz"), (5,"Buzz"), (7,"Baz") ]
 
main = mapM_ (putStrLn . fizzBuzz) [1..120]
