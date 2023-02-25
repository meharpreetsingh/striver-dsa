#include <bits/stdc++.h>
using namespace std;

int calcFactorial(int n)
{
  return n == 0 ? 1 : n * calcFactorial(n - 1);
}

int main()
{
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  cout << "Factorial: " << calcFactorial(number) << endl;
  return 0;
}