#include <bits/stdc++.h>
using namespace std;

int sumOfNumbers(int n)
{
  return n * (n + 1) / 2;
}

int sumUsingRecursion(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + sumUsingRecursion(n - 1);
}

int main()
{
  int number;
  cout << "Enter an integer: ";
  cin >> number;

  cout << "Sum: " << sumUsingRecursion(number) << endl;
  cout << "Sum: " << sumOfNumbers(number) << endl;
  return 0;
}