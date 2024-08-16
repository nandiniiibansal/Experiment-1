#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a= "Nandini";
    reverse(a.begin(), a.end());
    cout<<"reverse string is:"<<a<<endl;
    return 0;
    }