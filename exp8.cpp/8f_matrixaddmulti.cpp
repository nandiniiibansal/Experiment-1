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