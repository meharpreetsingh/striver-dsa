// Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Driver Code Ends
// User function Template for C++

class Solution
{
public:
  // vector<int> passedBy(int a, int &b)
  void passedBy(int a, int &b)
  {
    // code here
    cout << a << "==" << b;
  }
};

//{ Driver Code Starts.

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    Solution obj;

    obj.passedBy(a, b);

    // vector<int> ans = obj.passedBy(a, b);
    obj.passedBy(a, b);
    // cout << ans[0] << " " << ans[1] << "\n"                                                      ;
  }
  return 0;
}

// } Driver Code Ends