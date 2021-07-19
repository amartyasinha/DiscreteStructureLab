#include <iostream>
#include <cmath>
using namespace std;

void unique(int *set, int size){    
    int i,j,l;
    for(i=0;i<size;++i){
        for(j=i+1;j<size;){
            if(set[i]==set[j]){
                for(l=j;l<size-1;++l)
                    set[l]=set[l+1];
                    --size;
            }
            else
                ++j;
        }
    }

    cout<<"The Unique Elements of the Set are {";
    for(int i=0;i<size;i++){
        if(i == 0)
            cout<<set[i];
        else 
            cout<<", " <<set[i];
    }
    cout<<"}"<<endl;
}

int ismember(int *set, int size){
    int e, flag = 0;
    cout<<"\nEnter the Element you want to Search: ";
    cin>>e;

    for(int i=0;i<size;i++)
    if(e==set[i])
    {
        flag=1;
        break;
    }
    return flag;
}

void cardinality(int size){
	cout<<"The cardinality of given set is "<<size<<endl;
}

void powerset(int *set, int size){
    int count,temp;
    count = pow(2, size);
    cout<<"{ {∅}, ";
    for(int i=1; i<count; i++)
    {
        temp = i;
        cout<<"{";
        for(int j=0; j<size; j++)
        {
            if(temp&1)
            cout<<set[j]<<", ";
            temp=temp>>1;
        }
        cout<<"\b} ";
    }
	cout<<" }\n";
}

int main(){

    int size;
    int *set;

	cout<<"Enter the number of elements in the Set: ";
	cin>>size;
	set = new int[size];

    cout<<"Enter all "<<size<<" Elements of the Set\n";
	for(int i=0;i<size;i++){
        cin>>set[i];
    }

    cout<<"The set you have entered is {";
    for(int i=0;i<size;i++){
        if(i == 0)
            cout<<set[i];
        else 
            cout<<", " <<set[i];
    }
    cout<<"}"<<endl;

    int choice;
    char repeat;
    do{
        cout<<"\nSelect any of the following Operations\n";
        cout<<"1. Unique\n2. isMember\n3. Cardinality\n4. Power Set\n";
        cin>>choice;

        switch(choice){

            case 1:
            unique(set, size);
            break;

            case 2:
            if(ismember(set, size))
                cout<<"Element Found\n";
            else
                cout<<"Element not Found\n";
            break;

            case 3:
            cardinality(size);
            break;

            case 4:
            powerset(set, size);
            break;

            default:
            cout<<"\nWrong Choice!";

        }
        cout<<"Do you want to return to main menu? Y/N\nChoice: ";
        cin>>repeat;
    }while(repeat == 'Y' || repeat == 'y');

    return 0;
}