#include <bits/stdc++.h>
using namespace std;

int reverseInt(int n)
{
  int reverse = 0;
  int number = n;

  while (number != 0)
  {
    int output = number % 10;
    reverse = reverse * 10 + output;
    number /= 10;
  }

  return reverse;
}

int main()
{
  int userInput;
  cout << "Enter an integer: ";
  cin >> userInput;
  cout << endl;

  cout << "Reverse: " << reverseInt(userInput) << endl;

  return 0;
}