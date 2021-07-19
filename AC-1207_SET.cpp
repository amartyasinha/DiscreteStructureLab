#include <iostream>
#include <algorithm>
using namespace std;

class SET{
public:
    void subset(int size1, int size2, int set1[], int set2[]){
        int s = 0;
        for (int i = 0; i < size1; i++){
            for (int j = 0; j < size2; j++){
                if (set1[i] == set2[j]){
                    s++;
                    break;
                }
            }
        }
        if (s == size1)
            cout << "\n Set A is the Subset of set B";
        else
            cout << "\n Set A is not the Subset of set B";

        s = 0;

        for (int i = 0; i < size1; i++){
            for (int j = 0; j < size2; j++){
                if (set1[i] == set2[j]){
                    s++;
                    break;
                }
            }
        }
        if (s == size2)
            cout << "\n Set B is the Subset of set A";
        else
            cout << "\n Set B is not the Subset of set A";
    }

    void setunion(int size1, int size2, int set1[], int set2[]){
        int i = 0, j = 0;
        while (i < size1 && j < size2) {
            if (set1[i] < set2[j])
                cout << set1[i++] << " ";
    
            else if (set2[j] < set1[i])
                cout << set2[j++] << " ";

            else {
                cout << set2[j++] << " ";
                i++;
            }
        }

        while (i < size1)
            cout << set1[i++] << " ";
    
        while (j < size2)
            cout << set2[j++] << " ";
    }

    void intersection(int size1, int size2, int set1[], int set2[]){
        int i = 0, j = 0;
        while (i < size1 && j < size2) {
            if (set1[i] < set2[j])
                i++;
            else if (set2[j] < set1[i])
                j++;
            else
            {
                cout << set2[j] << " ";
                i++;
                j++;
            }
        }
    }

    void complement(int size1, int size2, int set1[], int set2[]){
        int sizeU, c=0;
        cout<<"Enter the size of universal set";
        cin>>sizeU;
        int universal[sizeU];
        for(int i=0;i<sizeU;i++)
        {
            cin>>universal[i];
        }

        cout<<"THE COMPLIMENT OF SET A\n";
        for(int i =0;i<sizeU;i++)
        {
            c=0;
            for(int j=0;j<size1;j++){
                if (universal[i]==set1[j])
                    c++;
            }
            if(c==0)
                cout<<universal[i]<<" ";
        }
        cout<<"\nTHE COMPLIMENT OF SET B\n";
        for(int i =0;i<sizeU;i++){
            c=0;
            for(int j=0;j<size2;j++){
                if (universal[i]==set2[j])
                    c++;
            }
            if(c==0)
                cout<<universal[i]<<" ";
        }
    }

    void setDifferenceA(int size1, int size2, int *set1, int *set2){
        int i = 0, j = 0;
        int c=0;

        for(i=0;i<size1;i++)
        {
            c=0;
            for(j=0;j<size2;j++)
            {
                if(set1[i]==set2[j])
                    c++;
            }
            if(c==0)
            {
                cout<<set1[i]<<" ";
            }
        }
        
    }

    void setDifferenceB(int size1, int size2, int set1[], int set2[]){
        int i = 0, j = 0;
        int c=0;

        for(i=0;i<size2;i++)
        {
            c=0;
            for(j=0;j<size1;j++)
            {
                if(set2[i]==set1[j])
                    c++;
            }
            if(c==0)
            {
                cout<<set2[i]<<" ";
            }
        }

    }

    void symmetricDifference(int size1, int size2, int set1[], int set2[]){
        int i = 0, j = 0;
    while (i < size1 && j < size2) {
       
        if (set1[i] < set2[j]) {
            cout << set1[i] << " ";
            i++;
        }
        else if (set2[j] < set1[i]) {
            cout << set2[j] << " ";
            j++;
        }

        else {
            i++;
            j++;
        }
    }
    while (i < size1) {
        cout << set1[i] << " ";
        i++;
    }
    while (j < size2) {
        cout << set1[j] << " ";
        j++;
    }
    }

    void cartesianProduct(int size1, int size2, int set1[], int set2[]){
        for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cout<< "("<<set1[i]<<","<<set2[j]<<")"<<endl;
    }

};

int main(){
    int i, j, size1, size2;
    cout<<"Enter the no. of elements in Set A: ";
    cin>>size1;

    int set1[size1];
    cout<<"Enter all "<<size1<<" elements of Set A:\n";
    for(i=0; i<size1; i++){
        cin>>set1[i];
    } 

    cout<<"Enter the no. of elements in Set B: ";
    cin>>size2;

    int set2[size2];
    cout<<"Enter all "<<size2<<" elements of Set B:\n";
    for(i=0; i<size2; i++){
        cin>>set2[i];
    }


    cout<<"Your Set A is: ";
    for(i=0; i<size1; i++){
        cout<<set1[i]<<" ";
    }
    sort(set1, set1 + size1);
    cout<<"\nYour Set B is: ";
    for(i=0; i<size2; i++){
        cout<<set2[i]<<" ";
    }
    sort(set2, set2 + size2);
    
    SET sets;
    int choice;
    char repeat;
    do{
        cout<<"\nSelect which Set Operation you want to perform:\n1. Subset\n2. Union\n3.Intersection\n4. Complement\n";
        cout<<"5. A-B\n6. B-A\n7. Symmetric Diffecence\n8. Cartesian Product";
        cout<<"\nEnter you choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                sets.subset(size1, size2, set1, set2);
                break;

            case 2:
                cout<<"\nThe Union of the given sets is: ";
                sets.setunion(size1, size2, set1, set2);
                break;

            case 3:
                cout<<"\n\nThe Intersection of the given sets is: ";
                sets.intersection(size1, size2, set1, set2);
                break;

            case 4:
                sets.complement(size1, size2, set1, set2);
                break;

            case 5:
                cout<<"\n\nThe Difference of both sets A-B: ";
                sets.setDifferenceA(size1, size2, set1, set2);
                break;

            case 6:
                sets.setDifferenceB(size1, size2, set1, set2);
                break;

            case 7:
                sets.symmetricDifference(size1, size2, set1, set2);
                break;

            case 8:
                sets.cartesianProduct(size1, size2, set1, set2);
                break;

            default:
            cout<<"\nWrong Choice!\n";
        }
        cout<<"\nDo you want to return to main menu? Y/N  ";
        cin>>repeat;
    } while(repeat == 'Y' || repeat == 'y');

    return 0;
}