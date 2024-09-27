#include<iostream>
using namespace std;
int main() {
    float num1, num2, result;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    try
    {
        if (num2==0)
        {
            throw num2;
        }
        cout<<"ans = "<< num1/num2<<endl;
    }
    catch (const float num2)
    {
        cout<<"The number should be gretaer thn 0"<<endl;
    }
    return 0;
}