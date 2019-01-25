// Author https://teamtreehouse.com/community/fizzbuzz-in-c
#include <stdio.h>

int main(int argc, const char * argv[]) {

    int num;

    for (num = 0; num <= 1000000; num++)
    {
        if (num % 3 == 0) {
             printf("Fizz");
        } else if (num % 5 == 0) {
             printf("Buzz");
        } else if (num % 3 == 0 && num % 5 == 0) {
             printf("FizzBuzz");
        } else {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
