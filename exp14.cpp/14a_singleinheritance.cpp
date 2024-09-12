#include<iostream>
using namespace std;
//Base class
class Concert{
public:
    void Happening() {
        cout<<"Concert is happening!"<< endl;
    }
};
// derived class
class Diljit: public
Concert {
    public:
    void singing() {
        cout<<"Diljit is singing!"<<endl;
    }
};
int main() {
    Diljit d;
    d.Happening(); //Inherited from Animal
    d.singing(); //Method of Dog class
    return 0;
}