#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s1, s2;
  cin >> s1 >> s2;
  
  /* Doesn't work with large numbers */
  // unsigned long long n1, n2, r;
  // n1 = stoull(s1, nullptr, 2);
  // n2 = stoull(s2, nullptr, 2);
  // r = (n1 | n2) & (~n1 | ~n2);
  // cout << format("{:0{}b}", r, s1.size()) << "\n";
  
  for (size_t i = 0; i < s1.size(); i++) {
    cout << ( (s1[i] != s2[i]) ? 1 : 0);
  }
  
  cout << "\n";

  return 0;
}
