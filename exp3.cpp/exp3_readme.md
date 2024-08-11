# Aim
To learn about arithmetic, logical, miscelleaneous and assignment operators on c++.

# Software Used
VS Code

# Problem Statement
1.) Write a code for boolean operators in c++.
2.) Write a code for checking equality of values in c++.
3.) Write a code for checking inequality of values in c++.

# Theory
The boolalpha function is a manipulator that sets the boolalpha flag, which tells the stream to read or write a bool value as text, according to the stream's locale.

The equal-to operator ( == ) returns true if both operands have the same value; otherwise, it returns false . The not-equal-to operator ( != ) returns true if the operands don't have the same value; otherwise, it returns false .
# Program codes
```javascript
//Bool
#include<iostream>
 using namespace std;
 int main()
{
    bool a = true;
    bool b = true;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}

//Equality Operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}

//Inequality Operator
#include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a!=b: "<<(a!=b)<<endl;
    return 0;
}


 #include<iostream>
 using namespace std;
 int main()
{ int a,b;
    
    a = 1;
    b = 1;
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"a: "<<(~a)<<endl;
    cout<<"a<<b: "<<(a<<b)<<endl;
    cout<<"a>>b: "<<(a>>b)<<endl;
    
    return 0;
}
```

# Output:
 1.) 3a_equality
 ![image](https://github.com/user-attachments/assets/0f21adad-7bc6-47c2-ad32-94858e69b26a)

 2.) 3b_boolean
![image](https://github.com/user-attachments/assets/b76d9a1a-a3c3-4d18-8b3c-537007b25e56)

3.) 3c_inequality
![image](https://github.com/user-attachments/assets/2aea7a74-8de1-4975-8994-be4d629db94e)

4.) 3d_operations

![image](https://github.com/user-attachments/assets/b6c81d07-deb3-4ed7-ace5-35f175925a5c)


# Conclusion
We learnt to use different operator in c++.
