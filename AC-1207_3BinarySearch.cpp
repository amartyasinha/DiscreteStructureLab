#include <iostream>
using namespace std;

int bin(int a[], int first, int last, int element){
    int mid;

    while(first<=last){
        mid = (first + last)/2;

        if(element==a[mid])
            return mid;

        else if(element<a[mid])
            return bin(a, first, mid-1, element);

        else
            return bin(a, mid+1, last, element);
    }

    return 0;
}

int main(){
    int size;

    cout<<"Enter size of Array: ";
    cin>>size;

    int a[size];

    cout<<"Enter elements in the array in sorted form:\n";

    for(int i=1; i<=size; i++){
        cin>>a[i];
    }

    cout<<"The Array you have entered is:\n";

    for(int i=1; i<=size; i++){
        cout<<" "<<a[i];
    }

    int element;

    cout<<"\nEnter the element you want to search: ";
    cin>>element;

    int result = bin(a, 1, size, element);

    if(result==0)
    cout<<"Element not found";

    else
    cout<<"The position of the element "<<element<<" is: "<<result;

    return 0;
}