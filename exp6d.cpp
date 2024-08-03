#include<iostream>
#include<string>
using namespace std;
int main(){
    string password="siu";
    string passWORD;
    cout<<"enter the password:"<<endl;
    getline(cin,passWORD);
    do{
        cout<<"Try again"<<endl;
        cin>>passWORD;
    }
    while (password!=passWORD);
        cout<<"Success!";
    return 0;
}
