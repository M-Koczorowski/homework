#include <iostream>
using namespace std;

int silnia( int n )
{
    if( n <= 1 )
         return 1;
   
    return n * silnia( n - 1 );
}

int main()
{
    int li;
    cout<<"podaj liczbe ktorej silnie chcesz uzyskac"<<endl;
    cin>>li;
    cout << silnia(li);
}
