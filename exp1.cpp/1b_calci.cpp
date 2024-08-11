#include <iostream>
using namespace std;
int main() 
{

    int a,b,product, sum,answer;
    float quotient;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"Enter the value of b:\n";
    cin>>b;
    quotient=a/b;
    cout<<"The solution of a/b:"<<quotient<<"\n";
    product=a*b;
    cout<<"The solution of a*b:"<<product<<"\n";
    sum=a+b;
    cout<<"The solution of a+b:"<<sum<<"\n";
    answer=a-b;
    cout<<"The solution of a-b:"<<answer<<"\n";

    return 0;
}