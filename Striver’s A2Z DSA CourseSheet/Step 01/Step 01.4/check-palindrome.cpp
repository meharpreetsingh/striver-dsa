#include <bits/stdc++.h>
using namespace std;

int reverseInt( int n ) {
  int reverse = 0;
  int number = n;

  while ( number != 0 ) {
    reverse = reverse * 10 + number % 10;
    number /= 10;
  }

  return reverse;
}

bool checkPalindrome( int n ) { return reverseInt( n ) == n ? true : false; }

int main() {
  int userInput;
  cout << "Enter an integer: ";
  cin >> userInput;

  if ( checkPalindrome( userInput ) ) {
    cout << "Number is Palindrome" << endl;
  } else {
    cout << "Number is not Palindrome" << endl;
  }

  return 0;
}