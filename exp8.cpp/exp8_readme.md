# Aim:
Creating a string in c++ and doing basic operations on it.

# Software used:
VS Code

# Problem Statement:
1. Print the string.
2. Enter two strings and perform concatenation on them.
3. Printing the reverse of the string entered.
4. Checking the palindrome of the string by the taking the input by user.
5. Taking input from user for printing matrices.
6. Taking two user input matrices and performing addition and multiplication.

# Theory:
In c++, the strings can be printed to the console using the 'cout' stream from the iostream library. This allow for the easy display of text
or the contents of the string variable.
String concatenation is the process of appending one string the end of other string. In c++, this can be performed by using the '+' operator or
using the 'append()' method as provided by the string class.
Reversing the string is the process of rearranging the characters of the string in the opposite order. In c++, this can be done by using
loop to swap the characters from the beginning or end or by using the 'reverse()' function from the 'algorithm' library.
A palindrome is a word or phrase that remains the same when the characters are reversed. In c++, this can be done by comapring the original
string with the reversed string.
A matrix is a two dimensional data structure consisting of rows and columns. In cpp, a matrix can be represented using a list of lists or two dimensional array.
Performing addition and multiplication on two matrices involves some specific mathematical operations, which are translated into programming logic. add_matrices() adds corresponding elements from two matrices, assuming they have the same dimensions. multiply_matrices() performs matrix multiplication by calculating the dot product of rows and columns.

# Program Code:
``` javascript
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

// With two user input matrix perform addition and subtraction:
#include <iostream>

using namespace std;

int main() {
    int row1, col1, row2, col2;

    // Get dimensions of the first matrix
    cout << "Enter number of rows for matrix 1: ";
    cin >> row1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> col1;

    // Get dimensions of the second matrix
    cout << "Enter number of rows for matrix 2: ";
    cin >> row2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> col2;

    // Check if addition is possible
    if (row1 != row2 || col1 != col2) {
        cout << "Matrices cannot be added. They must have the same dimensions." << endl;
        return 1;
    }

    // Check if multiplication is possible
    if (col1 != row2) {
        cout << "Matrices cannot be multiplied. Number of columns in matrix 1 must equal number of rows in matrix 2." << endl;
        return 1;
    }

    // Create matrices
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int sum[row1][col1];
    int product[row1][col2];

    // Get values for matrix 1
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Get values for matrix 2
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display results
    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Product of matrices:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

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
6. Addition and Subtraction with user input matrices
![image](https://github.com/user-attachments/assets/55cd1745-9509-4834-b085-34c25c618319)

# Conclusion:
String operations like printing, concatenating, reversing and checking palindrome in C++ are fundamental tasks that demonstrate
essential programming skills. Matrix and basic operations performed on it in c++ using add_matrices() and multiply_matrices.
These operations are key to manipulating and understanding strings and matrices forming the basis for more complex tasks in software
development. 
