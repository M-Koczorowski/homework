
#include<iostream>
using namespace std;

void Hanoi(int num,char A,char B,char C){
  if(num>0){
    Hanoi(num-1, A, C, B);
    cout<<"Move a disk "<<num<<" from "<<" "<<A<<" to"<<" "<<C<<endl;
    Hanoi( num-1, B, A, C);
  }
}

int main(){
  int numOfDisk;
  cout<<"Enter the number of disks"<<endl;
  cin>>numOfDisk;
  
  
  Hanoi(numOfDisk,'A','B','C');
  cout<<endl;
}
