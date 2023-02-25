#include <bits/stdc++.h>
using namespace std;

void printFibonacci(int n)
{
  int prev = 1;
  int next = 0;
  while (next <= n)
  {
    cout << next << ' ';
    swap(prev, next);
    next += prev;
  }
}

int main()
{
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  printFibonacci(number);
  return 0;
}