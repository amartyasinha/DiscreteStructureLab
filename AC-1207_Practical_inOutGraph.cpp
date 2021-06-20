#include<iostream>
using namespace std;

class Graph{

    char vertices[50];
    int matrix[50][50];
    int n;

    public:

    void input(){
        cout<<"Enter the no. of Vertices in the Graph: ";
        cin>>n;

        cout<<"Enter the Vertices (Alphabetic forms)\n";
        for (int i = 0; i < n; i++){
            cin>>vertices[i];
        }
        
        cout<<"Enter the number of edges going from the first vertex to the second vertex (Press 0 for none)\n";
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout<<"Vertices ("<<vertices[i]<<", "<<vertices[j]<<"): ";
                cin>>matrix[i][j];
            }
            
        }
    }

    void inOut(){

        cout<<"\n\tVertix\tInDeg\tOutDeg"<<endl;
        for (int i = 0; i < n; i++){
            int in = 0;
            int out = 0;

            for (int j = 0; j < n; j++){

                if(matrix[i][j] != 0)
                    out += matrix[i][j];

                if(matrix[j][i] != 0)
                    in += matrix[j][i];
            }
            cout<<"\t"<<vertices[i]<<"\t"<<in<<"\t"<<out<<endl;
        }
    }
};

int main(){

    Graph graph;

    graph.input();
    graph.inOut();

    return 0;
}