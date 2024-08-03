#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number= "<<endl;
    cin>>a;
    cout<<"enter the second number="<<endl;
    cin>>b;
    cout<<bitset<4>(~a);
}