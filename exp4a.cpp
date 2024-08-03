#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    if (number==0){
        cout<<number<<" is equal to zero";
    }
    else if (number>0){
        cout<<number<<" is greater thann zero";
    }
    else {
        cout<<number<<" is less than zero";
    }
    return 0;
}