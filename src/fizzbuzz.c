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
            printf("%d", i);
        printf("\n");
    }

    return 0;
}
