#include <iostream>

unsigned fib( unsigned n )
{
    if( n == 0 ) return 0;
   
    if( n <= 2 ) return 1;
   
    return fib( n - 1 ) + fib( n - 2 );
}

int main()
{
    int input;
    std::cout<<"podaj którą liczbe ciągu fibonacciego wypisac";
    std::cin>>input;
    std::cout << fib(input);
}
