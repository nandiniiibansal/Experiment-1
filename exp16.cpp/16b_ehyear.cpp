#include<iostream>
using namespace std;
int main() {
    int year, result;
    cout<<"Enter an year:"<<endl;
    cin>>year;
    try{
        if (year<=2000)
        {
            throw year;
        }
        cout<<"You entered year:"<<year<<endl;
    }
     catch (const int year)
      {
       cout<<"Your year entered is less than or equal to 2000"<<year<<endl; 
}
return 0;
}