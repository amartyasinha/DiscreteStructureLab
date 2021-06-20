#include <iostream>
using namespace std;

int hanoi(int n)
{
	
	if(n==1)
		return 1;
	else
	return 2*hanoi(n-1)+1;
}

int main()
{
	int n;
	cout<<"Enter the number of elements in tower of Hanoi: ";
	cin>>n;
	cout<<"The numbers moves: ";
	cout<<hanoi(n)<<endl;
return 0;
}
