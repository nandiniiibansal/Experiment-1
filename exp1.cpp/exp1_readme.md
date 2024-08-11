# Aim:
To learn about VS code and getting input from user and displaying it.

# Software Used
VS Code

# Problem Statement
 1.) Write a program to print simple 'Hello world' message.

 2.) Write a program to get the  input from user and displaying it.
 
 3.) Write a program to create a basic calculator.

 # Theory
To print a message or output we use _'cout'_ .

The namespace is used to decrease or limit the scope of any variable or function.
 
 _'endl'_ is used to move the cursor to the new line.


## Program Codes


```javascript
//Print hello world
#include<iostream>
using namespace std;
int main()
{
    cout<< "Hello World!";
    return 0;
}


 
// Input from user
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter your name ";
    getline(cin,a);
    cout<<"Hello  " <<a;
    return 0;
}

//Calculator 
#include<iostream>
using namespace std;
int main()
{ float a,b,c,d,e,f;
    cout<<"enter first number ";
    cin >> a;
    cout<< "enter second number ";
    cin >> b;
    c = a+b ;
    cout << "Sum is: " <<c<<endl;
    d = a-b;
    cout<< "Difference is: "<<d<<endl;
    e = a*b;
    cout<<"Product is:" << e <<endl;
    f = a/b;
    cout<<"Quotient is: "<<f<<endl;
    return 0;
}
```
# Output:
1.) 1a_helloworld
![image](https://github.com/user-attachments/assets/599d8191-8b35-421a-be37-4b3ff6d2839c)
2.) 1b_calci
![image](https://github.com/user-attachments/assets/97de8669-a80f-4545-bb11-121f0786a55c)
3.) 1c_userinput
![image](https://github.com/user-attachments/assets/c07d5118-c789-49a6-aeb3-e02cac75c595)




# Conclusion
We learnt how to take input from user and print it, we learnt to use basic operators like +, - , * and /.
