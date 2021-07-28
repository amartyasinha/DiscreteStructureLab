#include "iostream"
#include "cmath"
using namespace std;

int polynomial(int array[], int n, int x) {
    int value = array[0];

    for (int i = 1; i < n; i++)
        value = value * x + array[i];

    return value;
}

int main() {
    cout << "This program takes a Polynomial from user and calculates its value for 'x'\n\n";
    cout << "Enter total number of terms in the polynomial (2 for ax + b, 3 for ax^2 + bx + c, and so on: ";
    int terms;
    cin >> terms;
    int array[terms];

    for (int i = 0; i < terms; i++) {
        char letter = 'a';
        cout << "Enter the coefficient " << static_cast<char>(letter + i) << " of " << static_cast<char>(letter + i) << "x^" << (terms-i-1) << ": ";
        cin >> array[i];
    }

    cout << "\nYour polynomial f(x) is ";
    for (int i = 0; i < terms; i++) {
        if (i != 0)
            cout << " + ";
        cout << array[i] << "x^" << (terms-i-1);
    }

    cout << "\n\nEnter the value of 'x' for which you want to solve this polynomial: ";
    int x;
    cin >> x;
    int n = sizeof(array)/sizeof(array[0]);
    cout << "\nThe value of f(" << x << ") is " << polynomial(array, n, x) << endl;
    return 0;
}