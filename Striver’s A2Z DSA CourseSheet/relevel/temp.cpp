#include <bits/stdc++.h>
using namespace std;

void printSubarrays(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      set<int> s;
      bool flag = true;
      for (int k = i; k <= j; k++)
      {
        if (s.find(arr[k]) != s.end())
        {
          flag = false;
          break;
        }
        s.insert(arr[k]);
      }
      if (flag == true)
      {
        for (auto x : s)
          cout << x << " ";
        cout << endl;
      }
    }
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  printSubarrays(arr, n);
  return 0;
}
