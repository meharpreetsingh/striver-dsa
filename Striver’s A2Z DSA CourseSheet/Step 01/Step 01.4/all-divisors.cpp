#include <bits/stdc++.h>
using namespace std;

void allDivisors(int n)
{
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << i << ' ';
      if (i != n / i)
        cout << n / i << ' ';
    }
  }
}

int main()
{
  int userNumber;
  cout << "Enter a number: ";
  cin >> userNumber;
  cout << endl;
  cout << "All Divisors: ";
  allDivisors(userNumber);
  return 0;
}