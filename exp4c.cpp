#include <iostream>
using namespace std;
int main() {
   int operation;
    float a ,b;
    cout<<"select the operation you wnat to perform\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division"<<endl;
    cin>>operation;
    switch(operation){
        case 1:
        cout<<"enter the 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a+b;
        break;
        
        case 2:
        cout<<"enter the 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a-b;
        break;
        
        case 3:
        cout<<"enter the 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a*b;
        break;
        
        case 4:
        cout<<"enter the 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        if(b==0){
            cout<<"infinite answer";
        }
        else{
        cout<<a/b;
        }
        break;
    }
    return 0;
}