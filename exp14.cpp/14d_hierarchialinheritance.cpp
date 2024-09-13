#include<iostream>
using namespace std;
// base class
class Animal {
public:
    void eat() {
        cout<<"Animal is eating"<<endl;
    }

};
// derived class
class Dog : public Animal {
    public:
        void bark() {
            cout<<"Dog is barking"<<endl;
        }
};
//derived class 2
class Cat : public Animal {
    public:
        void meow() {
            cout<<"Cat is meowing"<<endl;
        }
};
int main() {
    Dog d;
    Cat c;
    d.eat(); // Inherited from Animal
    d.bark(); // Method of Dog class
    c.eat(); // Inherited from Animal
    c.meow(); //Method of Cat Class
    return 0;
}
