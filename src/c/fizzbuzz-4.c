// Author https://stackoverflow.com/users/639428/kenneth
#include <stdio.h>

int i;
for( i = 0; i!=1000000; ++i ) {
    bool bModThree = !(i % 3);
    bool bModFive = !(i % 5);

    if( bModThree || bModFive ) {
        if( bModThree ) {
            printf( "Fizz" );
        }
        if( bModFive ) {
            printf( "Buzz" );
        }
    } else {
        printf( "%d", i );
    }

    printf( "\n" );
}
