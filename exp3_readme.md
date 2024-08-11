# Aim:
To learn about arithmetic, logical, miscelleaneous and assignment operators on c++ and bitwise operators.

# Software used:
VS Code

# Theory:
 1.) Write a code for checking equality of values in c++
 2.) Write a code for checking inequality of values in c++.
 3.) Write a c++ program to do bitwise operation.

  # Program Codes:
 ```javascript
  // equality
  #include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"a==b:"<<(a==b)<<endl;
}

//boolean
#include<iostream>
using namespace std;
int main(){
    bool a= true;
    bool b= false;
    cout<<boolalpha<<(!b);
}

//bitset operator
#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number= "<<endl;
    cin>>a;
    cout<<"enter the second number="<<endl;
    cin>>b;
    cout<<bitset<4>(~a);
}
```

# Conclusion:
We learnt how to use arithmetic and bitwise operators in c++.
