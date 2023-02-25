#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

int main()
{
  int userNum1, userNum2;
  cout << "Enter two an integers: " << endl;
  cin >> userNum1 >> userNum2;
  cout << endl;

  cout << "GCD/HCF: " << gcd(userNum1, userNum2);

  return 0;
}