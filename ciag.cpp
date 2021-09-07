#include <iostream>

using namespace std;


long long ciag_ite(int n)
{
    long long minus1 = 3, minus2 = 1, current;
    if (n == 1) 
    {
        return 1;
    }
    else if (n == 2) 
    {
        return 3;
    }
    else 
    {
        for (int i = 3; i <= n; i++)
        {
            current = (i % 2 == 0 ? 3 * minus1 - minus2 + 1 : 2 * minus2);
            minus2 = minus1;
            minus1 = current;
        }
        return current;
    }
}

int main()
{
    int li;
    cin>>li;
    cout<<"podaj liczbe"<<endl;
    cout<<ciag_ite(li);
}
