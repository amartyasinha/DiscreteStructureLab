//
// Created by amartya on 22/06/21.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, m, l;

    cout << "Enter no. of Vertices: ";
    cin >> n;
    cout << "Enter no. of Internal Vertices: ";
    cin >> i;

    m = (n - 1)/i;
    l = (m - 1)*i + 1;

    cout << "\nYou have formed " << m << "-ary Tree";
    cout << "\nTotal number of leaves is " << l;

    return 0;
}