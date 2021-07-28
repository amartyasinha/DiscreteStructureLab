#include<iostream>
using namespace std;

class Relation{
    int n;
    int set1[10];
    int arr[10][10];
public:
    Relation(){
        cout<<"Enter cardinality of set A: ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter "<<i+1<<"st element of set A: ";
            cin>>set1[i];
        }
    }
    void inputRelation();
    void matrixDisplay();
    bool chkReflexive();
    bool chkSymmetric();
    bool chkAntisymmetric();
    bool chkTransitive();
};
void Relation::inputRelation(){
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
void Relation::matrixDisplay(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Relation::chkReflexive(){
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
bool Relation::chkSymmetric(){
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
bool Relation::chkAntisymmetric(){
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
bool Relation::chkTransitive(){
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
int main(){
    Relation a;
    a.inputRelation();
    cout<<"\nThe Matrix form of graph is: \n";
    a.matrixDisplay();

    if(a.chkReflexive() && a.chkSymmetric() && a.chkTransitive()){
        cout<<"Relation is Equivalent\n";
    }
    else{
        cout<<"Relation is not Equivalent\n";
    }
    if(a.chkReflexive() && a.chkAntisymmetric() && a.chkTransitive()){
        cout<<"Relation is Partial Ordered\n";
    }
    else{
        cout<<"Relation is not Partial Ordering\n";
    }
    return 0;
}