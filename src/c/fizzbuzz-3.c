// Author https://stackoverflow.com/users/1016716/mr-lister

#include <stdio.h>

int main(void)
{
   int i = 1;
   for (; i<=1000000; ++i) {
      printf("number= %d %s%s\n", i, i%3?"":"Fizz", i%5?"":"Buzz");
   }
   return 0;
}
