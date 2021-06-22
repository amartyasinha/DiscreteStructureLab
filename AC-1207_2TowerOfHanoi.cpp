#include<iostream>
using namespace std;

void Tower_of_Hanoi(int n,string left,string centre,string right) {
    if(n==1) {
        cout<<"Move the disk 1 from "<<left<<" rod to "<<right<<" rod"<<endl;
    } else {
        Tower_of_Hanoi(n-1,left,right,centre);
        cout<<"Move disk "<<n<<" from "<<left<<" rod to "<<right<<" rod"<<endl;
        Tower_of_Hanoi(n-1,centre,left,right);
    }
}

int main() {
    int n,x;
    cout<<"\nEnter number of disk: ";
    cin>>n;
    Tower_of_Hanoi(n,"left","centre","right");
    return 0;
}