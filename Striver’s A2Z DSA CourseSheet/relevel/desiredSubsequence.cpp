
#include <iostream>
using namespace std;

int desiredSubsequence(int n, int l1, int l2)
{
  int count = 0;

  return count;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, l1, l2;
    cin >> n >> l1 >> l2;
    cout << desiredSubsequence(n, l1, l2);
  }
  return 0;
}

/*
ChatGPT Answer

#include <bits/stdc++.h>
using namespace std;

int countSubsequences(int n, int l1, int l2)
{
  int dp[n + 1][n + 1];
  memset(dp, 0, sizeof(dp));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++)
  {
    dp[i][0] = 1;
    for (int j = 1; j <= i; j++)
    {
      dp[i][j] = dp[i - 1][j - 1] + (j * dp[i - 1][j]);
      if (j != l1 && j != l2)
      {
        dp[i][j] += dp[i - 1][j];
      }
    }
  }
  return dp[n][1];
}

int main()
{
  int t, n, l1, l2;
  cin >> t;
  while (t--)
  {
    cin >> n >> l1 >> l2;
    int count = countSubsequences(n, l1, l2);
    cout << count << endl;
  }
  return 0;
}
*/