#include <bits/stdc++.h>
using namespace std;

bool isArmstrong( int n ) {
  int sum = 0;
  int number = n;
  while ( number != 0 ) {
    int curInt = number % 10;
    sum += pow( curInt, 3 );
    number /= 10;
  }
  return sum == n ? true : false;
}

int main() {
  int userNumber;
  cout << "Enter a number: ";
  cin >> userNumber;

  cout << "isArmstrong: " << ( isArmstrong( userNumber ) ? "True" : "False" );
  return 0;
}