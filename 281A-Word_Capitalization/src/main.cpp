#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  if (s[0] >= 'a' && s[0] <= 'z') {
    s[0] -= 32;
  }
  
  cout << s;

  return 0;
}
