#include<iostream>
using namespace std;
int fib( int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    cout<<"the "<< num<< "th number in the fibonacci series is"<<fib(num)<<endl;
    return 0;
}