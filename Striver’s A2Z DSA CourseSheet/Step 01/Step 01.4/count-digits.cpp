#include <bits/stdc++.h>
using namespace std;

int countDigits( int n ) {
  int count = 0;
  int number = n;
  while ( number != 0 ) {
    number = number / 10;
    count++;
  }
  return count;
}

int main() {
  int userNumber;
  cout << "Enter a number: ";
  cin >> userNumber;
  cout << endl;
  cout << "Number of Digits: " << countDigits( userNumber );
  return 0;
}
