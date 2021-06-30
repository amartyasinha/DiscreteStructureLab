//
// Created by amartya on 30/06/21.
//
#include "iostream"
using namespace std;

float permutation(float n, float r) {
    if (r>0)
        return (n*permutation(n-1, r-1));
    else return 1;
}

float combination(float n, float r) {
    if (r>0)
        return ((n/r)*combination(n-1, r-1));
    else return 1;
}

int main() {
    cout << "Enter n: ";
    float n;
    cin >> n;
    cout << "Enter r: ";
    float r;
    cin >> r;

    printf("\nThe Permutation %0.0fP%0.0f is %0.0f\n", n, r, permutation(n, r));
    printf("The Combination %0.0fC%0.0f is %0.0f", n, r, combination(n, r));

    return 0;
}
