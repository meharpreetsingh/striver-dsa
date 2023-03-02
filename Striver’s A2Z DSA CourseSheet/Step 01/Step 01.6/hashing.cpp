#include <iostream>
#include <map>
using namespace std;

class numArrHash
{
private:
  map<int, int> hash;

public:
  // Do Precomputation
  numArrHash(int arr[], int n)
  {
    for (int i = 0; i < n; i++)
    {
      hash[arr[i]]++;
    }
  }
  int countOccurance(int num)
  {
    return hash[num];
  }
  void printOccurances()
  {
    pair<int, int> highest;
    pair<int, int> lowest;

    highest.first = hash.begin()->first;
    highest.second = hash.begin()->second;
    lowest.first = hash.begin()->first;
    lowest.second = hash.begin()->second;

    for (pair<int, int> el : hash)
    {
      cout << el.first << " occured " << el.second << " times." << endl;
      if (highest.second < el.second)
      {
        highest = el;
      }
      if (lowest.second > el.second)
      {
        lowest = el;
      }
    }
    cout << "Highest: " << highest.first << endl;
    cout << "Lowest: " << lowest.first << endl;
  }
};

int main()
{
  int arr[30] = {4, 6, 7, 5, 7, 8, 4, 6, 9, 3, 8, 7, 9, 5, 7, 3, 8, 9, 4, 7, 8, 9, 4, 3, 7, 3, 3, 4, 7, 4};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  numArrHash arrHash = numArrHash(arr, arrSize);
  int query = 4;
  cout << query << " occured " << arrHash.countOccurance(query) << " times." << endl;

  arrHash.printOccurances();

  return 0;
}