#include <bits/stdc++.h>
using namespace std;

void printNo(int n)
{
  if (n != 0)
  {
    printNo(n - 1);
    cout << n << " ";
  }
}

int main()
{
  int number;
  cout << "Enter an integer: ";
  cin >> number;

  printNo(number);
  return 0;
}