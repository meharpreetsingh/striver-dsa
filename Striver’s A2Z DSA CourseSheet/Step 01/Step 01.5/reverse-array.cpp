#include <bits/stdc++.h>
using namespace std;

void printArray(int n, int arr[])
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void reverseArray(int n, int arr[])
{
  for (int i = 0; i <= sqrt(n); i++)
  {
    swap(arr[n - (i + 1)], arr[i]);
  }
}

void reverseArrayRecursive(int arr[], int start, int end)
{
  if (start < end)
  {
    swap(arr[start], arr[end]);
    reverseArrayRecursive(arr, start + 1, end - 1);
  }
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements: -" << endl;
  // Get Array Elements
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Print Array
  cout << "Original Array: ";
  printArray(n, arr);
  cout << endl;

  // Print Reversed Array
  reverseArray(n, arr);
  cout << "Reverse Array: ";
  printArray(n, arr);
  cout << endl;

  // Print Reversed Array
  reverseArrayRecursive(arr, 0, n - 1);
  cout << "Reverse Array: ";
  printArray(n, arr);
  cout << endl;
  return 0;
}