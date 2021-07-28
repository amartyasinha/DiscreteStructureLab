//
// Created by amartya on 28/07/21.
//

#include "iostream"
using namespace std;

int comb(int n ,int r) {
    if(r==0 || r==n)
        return 1;
    else
        return ( comb(n-1,r-1) +  comb(n-1,r)) ;
}

int main() {
    int n ,r;
    cout<<"\nx1+x2+x3+---+xn=c";
    cout<<"\nEnter the no of variables: ";
    cin>>n;

    cout<<"\nEnter the value of total sum (c<=10) : ";
    cin>>r;

    cout<<"\nTotal number of possible solutions of the given Equation is ";
    cout<<comb(n+r-1,r);
}
