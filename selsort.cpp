#include <iostream>
#include <ctime>
#include <crand>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int ile = 10;


void SelSort(int N, int array)
{
	for(int i=0;i<N-1;i++)
	{
		int pom = array[i];
		int min = array[i];
		int gdzie = i;
		
		for(int j = i+1;j<N;j++)
		{
			if array[j]<min
			{
				min=array[j];
				gdzie = j;
			}
			
			array[i]=mini;
			array[gdzie]=pom;
		}
	}
	
	
}

void losuj(int array)
{
	srand(time(0));
	for(int i=0;i<ile;i++)
}


void pokaz(int array)
{
	for(int i=0;i<1;i++)
	{
		cout<<array[i]<<'\t';
	}
}



int main() {

}
