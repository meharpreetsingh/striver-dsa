#include <bits/stdc++.h>
using namespace std;

// Using Recursion
int calcFactorial( int n ) { return n == 0 ? 1 : n * calcFactorial( n - 1 ); }

// Factorial using loop
int calcFactorialSimple( int n ) {
  int factorial = 1;
  for ( int i = 1; i <= n; i++ ) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  cout << "Factorial: " << calcFactorialSimple( number ) << endl;
  return 0;
}