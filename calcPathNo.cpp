#include <iostream>
using namespace std;

#define SIZE 4

int calcPathNo(int graph[][SIZE], int source, int destination, int n){
	if (n == 0 && source == destination)
		return 1;
	if (n == 1 && graph[source][destination])
		return 1;
	if (n <= 0)
		return 0;

	int count = 0;

	for (int i = 0; i < SIZE; i++)
		if (graph[source][i] == 1)
			count += calcPathNo(graph, i, destination, n - 1);

	return count;
}

int main(){
	int graph[SIZE][SIZE] = { { 0, 1, 1, 1 },
						{ 0, 0, 0, 1 },
						{ 0, 0, 0, 1 },
						{ 0, 0, 0, 0 } };
	int source, destination, n;

    cout << "\nEnter Source: ";
    cin >> source;
    cout << "Enter Destination: ";
    cin >> destination;
    cout << "Enter n: ";
    cin >> n;
    
	cout << calcPathNo(graph, source, destination, n);
	return 0;
}
