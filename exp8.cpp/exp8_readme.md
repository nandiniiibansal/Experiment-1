# Aim:
Creating a string in c++ and doing basic operations on it.

# Software used:
VS Code

# Problem Statement:
1. Print the string.
2. Enter two strings and perform concatenation on them.
3. Printing the reverse of the string entered.
4. Checking the palindrome of the string by the taking the input by user.

# Theory:
In c++, the strings can be printed to the console using the 'cout' stream from the iostream library. This allow for the easy display of text
or the contents of the string variable.
String concatenation is the process of appending one string the end of other string. In c++, this can be performed by using the '+' operator or
using the 'append()' method as provided by the string class.
Reversing the string is the process of rearranging the characters of the string in the opposite order. In c++, this can be done by using
loop to swap the characters from the beginning or end or by using the 'reverse()' function from the 'algorithm' library.
A palindrome is a word or phrase that remains the same when the characters are reversed. In c++, this can be done by comapring the original
string with the reversed string.

# Program Code:
//Printing the string
#include <iostream>
using namespace std;
int main()
{
    char s[]= "Nandini";
    cout<<s<<endl;
    return 0;
}

//Concatenating the string
#include<iostream>
using namespace std;
int main() 
{
    string name("Nandini");
    string surname("Bansal");
    name.append(surname);
    cout<<name<<endl;
}

//Reversing the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a= "Nandini";
    reverse(a.begin(), a.end());
    cout<<"reverse string is:"<<a<<endl;
    return 0;
}

//Checking the palindrome of a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cin>>s1;
    reverse(s1.begin(), s1.end());
    if (s1==s2) 
    {
        cout<<"Yes! It is a palindrome";
    }
    else cout<<"No! It is not a palindrome";
}

// Matrices with user input
#include<iostream>
using namespace std;
int main()
{
    int r,c , i , j;
    cout<< " Enter number of rows: ";
    cin>> r ;
    cout<<" Enter number of columns: ";
    cin>> c;
    int arr[r][c];
    for (i=0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            cout<< "Enter elements ("<<i<< "," <<j<<"): "  ;
            cin>>arr[i][j];
        }
    }
for (i=0 ; i<r ; i++)
{
    for(j = 0; j< c ; j++ )
    { 
        cout<< " "<< arr[i][j];
    }
    cout<<endl;
}
}


# Output:
1. Printing a string
![image](https://github.com/user-attachments/assets/c7449883-9bc6-4126-8f1e-d8e1b9501b43)
2. Concatenation
![image](https://github.com/user-attachments/assets/4999c665-ebcd-4a0e-a8df-2d0b53a8de7a)
3. Reversing
![image](https://github.com/user-attachments/assets/e4bb279a-f091-4010-be6a-0cf6bac6c902)
4. Palindrome
![image](https://github.com/user-attachments/assets/48c86c43-3bf0-4cf6-bb8a-27ed562d2d62)
5. Matrices with user input
![image](https://github.com/user-attachments/assets/1a709e8c-90ec-4d5a-9176-76682e65fd41)

# Conclusion:
String operations like printing, concatenating, reversing and checking palindrome in C++ are fundamental tasks that demonstrate
essential programming skills . These operations are key to manipulating and understanding strings, forming the basis for more complex tasks 
in software development.
