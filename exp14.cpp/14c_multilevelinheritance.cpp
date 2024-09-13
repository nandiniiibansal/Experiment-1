#include<iostream>
using namespace std;
// base class
class Person {
    public:
        void speaker() {
            cout<<"Person is speaking"<<endl;
        }
};
//Derived class
class Student : public
Person {
    public:
    void study() 
    {
        cout<<"Student is studying"<<endl;
}
};
// derrived class from student
class GraduateStudent : public
Student {
    public:
    void research() {
        cout<<"Graduate Student is doing research"<<endl;
    }
};
    int main() {
        GraduateStudent d;
        d.study();
        d.research();
    return 0;
    }