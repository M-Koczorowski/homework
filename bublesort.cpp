#include <iostream>
#include <time.h>


using namespace std;
const int ile = 10;
int a[ile];
// int krok = 1;
void losuj(int tab[]) {
    srand(time(0));
    for (int i = 0; i < ile; i++) {
        tab[i] = rand() % 10;
    }

}
void pokaz(int tab[]) {
    for (int i = 0; i < ile; i++)
        cout << tab[i] << " ";
}
void BubbleSort(int N, int tab[]) {
 //bool zamiana = false;
 int i,j=0. zamiana;
   do{
        zamiana=0;
        for(int i=0;i<N-1-j;i++)
        {
           if (tab[i]>tab[i+1])
           {
               swap(tab[i],tab[i+1]);
               zamiana = true;


           }

        }
      }
      while(zamiana);
      {
          cout<<"posortowana tablica";

      }

}

int main()
{

    cout << "liczby losowe: ";
    losuj(a);
    pokaz(a);
    cout << endl << "posortowane:\n";
    BubbleSort(ile, a);


    return 0;
}
