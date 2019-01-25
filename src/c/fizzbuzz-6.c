// Author https://stackoverflow.com/users/1008428/martiert

#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<=1000000; ++i)
    {
        if (i % 3 == 0)
            printf("Fizz");
        if (i % 5 == 0)
            printf("Buzz");
        if ((i % 3 != 0) && (i % 5 != 0))
            printf("number=%d", i);
        printf("\n");
    }

    return 0;
}
