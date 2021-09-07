#include <iostream>

unsigned fib( unsigned n )
{
    if( n == 0 ) return 0;
   
    if( n <= 2 ) return 1;
   
    return fib( n - 1 ) + fib( n - 2 );
}

int main()
{
    std::cout << fib( 6 );
}
