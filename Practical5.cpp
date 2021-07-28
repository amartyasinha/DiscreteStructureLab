#include <iostream>
using namespace std;

int fib(int n) {
   if(n <= 1)
        return n;
    else
        return(fib(n-1)+fib(n-2));
}

int main() {
   int n;
   cout << "Enter n: ";
   cin >> n;
   cout << "\nThe Fibonnaci Series of " << n << " numbers is ";
   int i = 0;

   while(i < n) {
      cout << " " << fib(i);
      i++;
   }
   cout << endl << endl;

   return 0;
}