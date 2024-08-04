#include <iostream>
using namespace std;


int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
switch (number) 
{
    case 0:
        cout << "The number is zero." << endl;
         break;
     default:
        if (number > 0) {
            cout << "The number is positive." << endl;
         } else {
            cout << "The number is negative." << endl;
        }
        break;
 }

 return 0;
}