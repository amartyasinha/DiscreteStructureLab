#include<iostream>
using namespace std;

void TowerOfHanoi(int n, string l, string c, string r) {
    if(n==1) {
        cout << "Move Disk 1 from " << l << " Rod to " << r << " Rod." << endl;
    } else {
        TowerOfHanoi(n-1, l, r, c);
        cout << "Move Disk " << n << " from " << l << " Rod to " << r << " Rod." << endl;
        TowerOfHanoi(n-1, c, l, r);
    }
}

int main() {
    int n;
    cout<<"Enter number of disk: ";
    cin>>n;
    TowerOfHanoi(n,"left","centre","right");
    return 0;
}