#include<iostream>
using namespace std;

class Graph{

    char vertices[50];
    int adjMatrix[50][50];
    int n;

    public:

    void input(){
        cout<<"Enter the no. of Vertices in the Graph: ";
        cin>>n;

        cout<<"Enter the Vertices (Alphabetic forms)\n";
        for (int i = 0; i < n; i++){
            cin>>vertices[i];
        }
        
        cout<<"Press 1 if the vertices are Adjacent and 0 if vertices are not Adjacent\n";
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout<<"Vertices ("<<vertices[i]<<", "<<vertices[j]<<"): ";
                cin>>adjMatrix[i][j];
            }
            
        }
    }

    void adj(){
        cout<<"\nThe Adjacency Matrices for the provided Graph\n\n";
        cout<<"\t  ";
        for (int i = 0; i < n; i++){
            cout<<" "<<vertices[i];
        }

        cout<<"\n\n";

        for (int i = 0; i < n; i++){
            cout<<"\t"<<vertices[i]<<"  ";

            for (int j = 0; j < n; j++){
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    } 

    void complete(){
        bool flag = 1;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i != j && adjMatrix[i][j] == 0){

                    flag = 0;
                    break;
                }
            }
        }
        if(flag){
            cout<<"\nIt is a Complete Graph\n";
        }
        if(!flag)
            cout<<"\nIt is not a Complete Graph\n";
    }
};

int main(){

    Graph graph;

    graph.input();
    graph.adj();
    graph.complete();

    return 0;
}