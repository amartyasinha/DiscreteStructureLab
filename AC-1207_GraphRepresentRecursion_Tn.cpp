//
// Created by amartya on 30/06/21.
//

#include "iostream"
#include "cmath"
using namespace std;

int TnSum(int n) {
    if (n == 0)
        return 1;
    else
        return (n + TnSum(n-1));
}
int TnPow(int n) {
    if (n == 0)
        return 1;
    else
        return (pow(n, 2) + TnPow(n-1));
}

int TnMul(int n) {
    if (n == 1)
        return 1;
    else
        return (n + (2 * TnMul(n/2)));
}

int main() {
    int choice;
    int n;
    char repeat;



    do {
        cout << "This program is to perform following Recurrence Relations. You can Choose an option then input the value of 'n'\n";
        cout << "1. T(n)= T(n-1)+n\n2. T(n)= T(n-1) +n^2\n3. T(n)= 2*T(n/2)+n";
        cout <<"\nChoice: ";
        cin >> choice;

        cout << "Enter the value of n: ";
        cin >> n;

        switch (choice) {
            case 1: {
                cout << "Solution of T(n)= T(n-1)+n is " << TnSum(n);
                break;
            }
            case 2: {
                cout << "Solution of T(n)= T(n-1) +n^2 is " << TnPow(n);
                break;
            }
            case 3: {
                cout << "Solution of T(n)= 2*T(n/2)+n is " << TnMul(n);
                break;
            }
            default: cout << "Wrong Choice!";
        }

        cout << "\nDo you want to return to main menu? Y/N..... ";
        cin >>repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}