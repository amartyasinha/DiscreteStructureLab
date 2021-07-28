//
// Created by amart on 7/14/2021.
//

#include<iostream>
using namespace std;

class RELATION{
    int n;
    int set1[10];
    int arr[10][10];
public:
    RELATION(){
        cout<<"Enter cardinality of set A: ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter "<<i+1<<"st element of set A: ";
            cin>>set1[i];
        }
    }
    void inputRelation() {
        cout<<"Press 1 for yes or 0 for no.\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"Is there relation from element "<<set1[i]<<" to "<<set1[j]<<" :";
                cin>>arr[i][j];
                if(arr[i][j]>1){
                    abort();
                }
            }
        }
    }

    void matrixDisplay() {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    bool chkReflexive() {
        bool flag;
        for(int i=0;i<n;i++)
        {
            if(arr[i][i]==1)
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
        return flag;
    }

    bool chkSymmetric() {
        bool flag =true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((arr[i][j]!=arr[j][i])){
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }

    bool chkAntisymmetric() {
        bool flag =true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((arr[i][j]==1)&&(arr[j][i]==1)&&(i!=j)){
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
    bool chkTransitive() {
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(arr[i][k]==1 && arr[k][j]==1){
                        if(arr[i][j]==0){
                            flag=false;
                            break;
                        }
                    }
                }
            }
        }
        return flag;
    }
};

int main(){
    RELATION a;
    a.inputRelation();
    cout<<"\nThe Matrix form of graph is: \n";
    a.matrixDisplay();

    if(a.chkReflexive() && a.chkSymmetric() && a.chkTransitive()){
        cout<<"RELATION is Equivalent\n";
    }
    else{
        cout<<"RELATION is not Equivalent\n";
    }
    if(a.chkReflexive() && a.chkAntisymmetric() && a.chkTransitive()){
        cout<<"RELATION is Partial Ordered\n";
    }
    else{
        cout<<"RELATION is not Partial Ordering\n";
    }
    return 0;
}