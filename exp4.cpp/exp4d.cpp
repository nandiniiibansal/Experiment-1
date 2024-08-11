#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter\n1:Monday\n2:Tuesday\n3:Wednesday\n4:Thursday\n5:Friday\n6:Saturday\n7:Sunday"<<endl;
    cin>>a;
    switch(a){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"invalid input";
        break;
    }
    return 0;
}