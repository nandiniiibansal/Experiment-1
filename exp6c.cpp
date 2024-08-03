#include <iostream>
using namespace std;
int main() {
  int number;
  cout<<"enter the end value:";
  cin>>number;
  for (int i=0; i<number; i++)
  {
      for(int j=0; j<number; j++)
      {
        cout<<"*";
      }
  cout<<endl;
  }
    return 0;
}