//
// Created by Amartya Sinha on 28/07/21.
//

#include "iostream"
using namespace std;

class RELATION {
public:
    int rel[20][20];
    int n;

    void Reflexive() {
        bool flag = true;

        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j && rel[i][j] != 1){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << "This is Reflexive\n";
        else
            cout << "This is not Reflexive\n";
    }


    void Transitive() {
        bool flag = false;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (rel[i][j] == 1 && rel[i+j][j+1] == 1 && rel[i][j+1] == 1){
                    flag = true;
                    break;
                }
            }
        }
        if(flag)
            cout << "This is Transitive\n"<<endl;
        else
            cout << "This  is not transitive\n"<<endl;
    }

    void InputData() {
        cout << "Enter the size of the set: ";
        cin >> n;
        char set[20];
        cout << "Enter the elements in the set: ";
        for (int i = 0; i < n; i++){
            cin >> set[i];
        }
        cout << "Press 1 if there is relation between given elements. Otherwise, press 0\n";
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << "Between " << set[i] << " and " << set[j] << " ? -> ";
                cin >> rel[i][j];
                if (rel[i][j]>1)
                    abort();
            }
        }
    }
};

int main() {
    RELATION relation{};
    relation.InputData();

    int option;
    char choice;
    do {
        cout << "Enter 1: To check for Reflexive relation\n";
        cout << "Enter 2: To check for Transitive Relation\n";
        cin >> option;

        switch(option) {
            case 1:
                relation.Reflexive();
                break;
            case 2:
                relation.Transitive();
                break;
            default:
                cout<<"Wrong Choice!\n";
        }
        cout << "Do you want to return to main menu? Y/N... ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
