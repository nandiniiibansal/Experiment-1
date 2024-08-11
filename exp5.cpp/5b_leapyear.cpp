#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year"<<endl;
    cin>>year;
    if(cin.fail())
    {
        cout<<"invalid input";
    }
    else 
    {
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
        cout<<year<<" is a leap year";
        }
        else 
        {
        cout<<year<<" is not a leap year";
        }
    }
    return 0;
}