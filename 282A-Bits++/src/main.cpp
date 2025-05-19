#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n;

  x = 0;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s[0] == '+' || s[2] == '+') {
      x += 1;
    } else {
      x -= 1;
    }
  }

  cout << x;

  return 0;
}
