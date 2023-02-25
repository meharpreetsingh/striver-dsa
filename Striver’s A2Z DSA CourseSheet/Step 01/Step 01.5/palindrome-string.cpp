#include <bits/stdc++.h>
using namespace std;

bool isPalindromeStr(string s)
{
  string t = "";
  string la = "abcdefghijklmnopqrstuvwxyz";
  string ua = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string num = "0123456789";
  for (int i = 0; i < s.length(); i++)
  {
    if (la.find(s[i]) != string::npos || ua.find(s[i]) != string::npos || num.find(s[i]) != string::npos)
    {
      t += tolower(s[i]);
    }
  }
  // Checking Palindrome
  int start = 0;
  int end = t.length() - 1;
  while (start < end)
  {

    if (t[start] != t[end])
    {
      return false;
    }
    start += 1;
    end -= 1;
  }
  return true;
}

bool isPalindrome(string &str, int start, int end)
{
  // cout << "Called with: " << str << '-' << str[start] << " " << str[end] << endl;
  if (start >= end)
  {
    return true;
  }
  else
  {
    return str[start] == str[end] ? isPalindrome(str, start + 1, end - 1) : false;
  }
}

int main()
{
  // Get string from user
  string str;
  cout << "Enter a string: ";
  cin >> str;

  // Check palindrome
  cout << "Palindrome: " << ((isPalindrome(str, 0, str.length() - 1) == 1) ? "True" : "False");
  return 0;
}