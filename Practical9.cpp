#include <iostream>
using namespace std;

int main()
{
    int i, j, k, temp, size;
    cout << "Enter the size of the array:  ";
    cin >> size;
    int array[size];
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int n = 0;  // Var to count total number of comparisons
    for (k = 1; k < size; k++)
    {
        temp = array[k];
        j = k - 1;
        int b = 0; // Var to store number of comparison in every step
        while (j >= 0 && temp <= array[j])
        {
            n++;
            b++;
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
        cout << " In " << k << " step number of  comparison is  " << b << endl;
    }
    cout << "\n\nTotal number of comparisons  " << n << ".";
    cout << "\n The sorted array is ";
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}