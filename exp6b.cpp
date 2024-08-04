#include <iostream>
using namespace std;
int main() {
  int number, sum;
  sum=0;
  cout<<"enter the end value:";
  cin>>number;
  for (int i=1; i<=number; i++)
  {
  sum= sum+i;
  }
  cout<<sum;
    return 0;
}
