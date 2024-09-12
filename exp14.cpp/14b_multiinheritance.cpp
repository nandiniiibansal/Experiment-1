#include<iostream>
using namespace std;
// Base class
class Engine {
public:
    void start() {
        cout<<"Engine starts"<<endl;
    }
};
//Base class 2
class Transmission {
    public:
    void shiftGear() {
        cout<<"Transmission shifts gear"<<endl;
    }
};
//Derived class
class Car: public Engine, public
Transmission {
    public:
    void drive() {
        cout<<"Car is being drived"<<endl;
    }
};