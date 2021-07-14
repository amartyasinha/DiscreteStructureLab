//
// Created by amart on 7/14/2021.
//

#include "iostream"
using namespace std;

void ArrayPrint(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout<<"\n";
}

void Permutation(int a[], int size, int n) {
    if (size == 1) {
        ArrayPrint(a, n);
        return;
    }

    for (int i = 0; i < size; i++) {
        Permutation(a, size - 1, n);

        if (size % 2 == 1)
            swap(a[0], a[size - 1]);
        else
            swap(a[i], a[size - 1]);
    }
}

int main() {
    int count;
    cout << "Enter the total elements for Permutation: ";
    cin >> count;

    int array[count];
    cout << "Enter all elements for Permutation:\n";
    for (int i = 0; i < count; i++) {
        cout << "Enter a[" << i << "]: ";
        cin >> array[i];
    }

    int n = sizeof array / sizeof array[0];
    Permutation(array, n, n);

    return 0;
}
