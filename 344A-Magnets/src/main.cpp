#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  int xp, xn, cnt;
  cnt = 1;

  cin >> xp;
  for (int i = 1; i < n; i++) {
    cin >> xn;
    if (xp != xn) {
      cnt++;
    }
    xp = xn;
  }
  
  cout << cnt << "\n";

  return 0;
}
