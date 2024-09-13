# Aim
To learn about inheritance and its types in c++.

# Software used
VS Code

# Theory
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object Oriented Programming in C++. In this article, we will learn about inheritance in C++, its modes and types along with the information about how it affects different properties of the class.

# Problem code
``` javascript
// SINGLE INHERITANCE
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

// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;
// Base class
class Engine {
public:
    void starts() {
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
int main(){
     Car d;
     d.drive();
        d.shiftGear(); 
    return 0;
}
```

# Output
1.) Single Inheritance
![image](https://github.com/user-attachments/assets/3f0e7eaa-f945-4a46-a3e5-61689cc22f97)
2.) Multiple Inheritance
![image](https://github.com/user-attachments/assets/fca46f58-97ac-403d-98c6-fcea9595c950)

# Conclusion
We learnt about single and multiple inheritance.
