#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  string s;

  cin >> n;
  cin >> s;
  
  int cnt = 0;
  int xp, xn;

  xp = s[0];
  for (size_t i = 1; i < s.size(); i++) {
    xn = s[i];
    if (xp == xn) {
      cnt++;
    } else {
      xp = xn;
    }
  }

  cout << cnt;

  return 0;
}
